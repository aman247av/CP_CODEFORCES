#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin>>k>>n;
    int a[k];
    int c=0;

    for (int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    
    
    for(int i=0;i<k;i++){
        if(a[i]>=a[n-1] && a[i]!=0)
        c++;
    }

    cout<<c;

    return 0;
}