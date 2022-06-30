void recursion(int x, vector<int> nums, vector<vector<int>>& N)
{
    if(x==nums.size()){
        N.push_back(nums);
        return;
    }
      
    for(int i=x;i<nums.size();i++){
        if(i==x || nums[x]!=nums[i]){   
        swap(nums[x],nums[i]);
        recursion(x+1,nums,N);
          
            
        }
         
    }
    
}


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
          sort( nums.begin(), nums.end() );
          int x=0;
          vector<vector<int>> res;

           recursion(x,nums,res);
           res.erase( unique( res.begin(), res.end() ), res.end() );
      
       return res;
        
    }
};
