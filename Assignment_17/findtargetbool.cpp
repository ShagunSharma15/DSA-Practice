#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
   for(int i=0;i<A.size();i++){
       if(A[i]==target){
           return true;
          
       }
   }
  
    return false;
}
bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
   
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
        if(A[i][j]==target){
            return true;
        }
        }
    }
    
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
   
     for(int i=0;i<A[0].size();i++){
       if(A[r][i]==target){
            return true;
        }
  }
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){

     for(int i=0;i<A.size();i++){
       if(A[i][c]==target){
            return true;
        }
  }
    return false;
}


int main() {
    vector<int>B ={1,2,3,4,5,6};
    vector<vector<int> >A={{1,2,3}, {3,4,5}, {6,7,8}};
    if(isTargetPresent(B, 4)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Not there!"<<endl;
    }
    
     if(isTargetPresent(B, 4)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Not there!"<<endl;
    }
     if(isTragetPresentInRow(A, 7, 2)){
         cout<<"present"<<endl;
    }
     else{
        cout<<"Not there!"<<endl;
    }
    
     if(isTragetPresentInCol(A, 4, 1)){
         cout<<"present"<<endl;
    }
     else{
        cout<<"Not there!"<<endl;
    }
    
    
    
   return 0;
}
