#include <bits/stdc++.h>
using namespace std;


#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fo(i,a,b) for(int i=a ; i<b ; i++)
#define foe(i,a,b) for(int i=a ; i<=b ; i++)
#define endl '\n'
#define ff first
#define ss second
#define MOD 1000000007
template <typename P> class vectorClass
{
    P* a;
    int size,current;
 
public:
    vectorClass()
    {
        a = new P[1];
        size = 1;
        current = 0;
    }
    void push(P data)
    {
        if (current == size) {
            P* temp = new P[2 * size];
 
            for (int i = 0; i <size; i++) {
                temp[i] = a[i];
            }

            delete[] a;
            size *= 2;
            a = temp;
        }
 
        a[current] = data;
        current++;
    }
 
    void push(int data, int index)
    {
        if (index == size)
            push(data);
        else
            a[index] = data;
    }
 
   
    P get(int index)
    {
        if (index < current)
            return a[index];
    }
 
   
    void pop() { current--; }
    int vecsize() { return current; }
    int getcapacity() { return size; }

    void print()
    {
        for (int i = 0; i < current; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
 

int main()
{
    vectorClass<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);
   
    cout << "Vector size : " << v.vecsize() << endl;
    cout << "Vector capacity : " << v.getcapacity() << endl;
    cout << "Vector elements : ";
    v.print();
    v.pop();
    cout << "Vector elements after one pop: ";
    v.print();
   
 
    return 0;
}




