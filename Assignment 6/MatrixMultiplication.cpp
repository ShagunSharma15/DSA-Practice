int main() {
    int mul[3][3];
    
    int A[3][3]={
        {1, 2 ,3},
        {2, 3, 4},
        {3, 4, 5}
    };
    int B[3][3]={
        {2,3,4},
        {1,2,3},
        {5,6,7}
       
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>B[i][j];
        }
    }
        cout<<"Matrix is:\n";
         for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
             cout<<"\n";
         }
    cout<<"\n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
             cout<<"\n";
         }
    cout<<"\n";
    
    /* for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=A[i][j]*B[i][j];
            cout<<"\n"<<mul[i][j]<<" ";}
     }
    cout<<"\n";*/
    
    cout<<"multiply of the matrix=\n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
mul[i][j]=0;
for(int k=0;k<3;k++)
{
mul[i][j]+=A[i][k]*B[k][j];
}
}
}

for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<mul[i][j]<<" ";
}
cout<<"\n";
}
 return 0;
}
