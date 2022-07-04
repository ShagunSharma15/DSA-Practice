string encryption(string s) {
    string ans="";
int n=s.length();
int r=floor(sqrt(n));
int c=ceil(sqrt(n));

if(r*c<n){
    r++;
}
vector<vector<char>>temp(r, vector<char> (c));
int k=0;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    {
        temp[i][j]=s[k];
        k++;
    }
}
    for(int i=0;i<c;i++){
    for(int j=0;j<r;j++)
    {
        char a=temp[j][i];
        
        if(a){
                 ans+=a;
        }
        
    }
    
  ans+=' ';
   

}
 return ans;
}
