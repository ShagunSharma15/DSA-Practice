int main() {
    
    int A[3][3]={
        {1, 2 ,3},
        {2, 3, 4},
        {3, 4, 5}
    };
   
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
        cout<<"Matrix is:\n";
         for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
             cout<<"\n";
         }
    
        
        return 0;
    
    
}
