#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,count = 0,tallest = 0; 
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++){
     cin>>a[i];
     tallest = max(tallest, a[i]);
    }
    for(int i=0;i<n;i++){
     if(a[i] == tallest) 
    count++;}
    cout<<count<<endl;
    
    return 0;
}
