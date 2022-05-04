#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int main() {
    int arr[MAX], n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[n-i]<<" ";
    } 
    return 0;
}
