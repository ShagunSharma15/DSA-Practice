void recursion(int x,vector<string>& nums,string s )
{
    if(x==s.size())
    {
        nums.push_back(s);
        return;
    }
  
  
         recursion(x+1,nums,s);
             if(isalpha(s[x]))
             {
                 if(s[x]<97 )
                 {
                    s[x]+=32;
                   recursion(x+1,nums,s);

            
                 }
            else
            {
                    s[x]-=32;
                    recursion(x+1,nums,s);
            }
            }
        
}
    
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
       int x=0;
        vector<string> res;
        recursion(x,res,s);
        return res;
     
    }
};
