void recursion(int x,vector<int>& nums,vector<vector<int>>& N)
{   
    if(x==nums.size())
    {N.push_back(nums);
     return;
    }
    for(int i=x;i<nums.size();i++)
    {
        swap(nums[x],nums[i]);
        recursion(x+1,nums,N);
        swap(nums[x],nums[i]);
    }
    
}
    
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         int x = 0;
        vector<vector<int>>ans;
        recursion(x,nums,ans);
            return ans;
    }
};
