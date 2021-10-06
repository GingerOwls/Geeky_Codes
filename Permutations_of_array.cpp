class Solution {
public:
    
    vector<vector<int>>ans;
    
    void generate(vector<int>&nums, int n, unordered_map<int, int>freq, vector<int>temp)
    {
        
        // base case 
        if(temp.size()==n)
        {
            ans.push_back(temp);
            return;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(freq[nums[i]]==0)
            {
                freq[nums[i]]=1;
                temp.push_back(nums[i]);
                generate(nums, n, freq, temp);
                temp.pop_back();
                freq[nums[i]]=0;
                
            }
        }
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int, int>freq;
        
        vector<int>temp;
        generate(nums, n, freq, temp);
        
        return ans;
        
    }
};
