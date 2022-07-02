void recursion(int x,vector<int> temp, vector<int> nums, vector<vector<int>>& N){
    if(x==nums.size()){
        N.push_back(temp);
        return;
    }
 
    
   recursion(x+1,temp,nums, N);
    int i=nums[x];
   temp.push_back(i);
    recursion(x+1,temp, nums, N);
 
    return;
  
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int x=0;
        vector<int> temp;
        vector<vector<int>> ans;
        recursion(x,temp,nums,ans);
        return ans;
    }
};
