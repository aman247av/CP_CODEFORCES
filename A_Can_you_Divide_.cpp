#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%m==0)
            cout<<0<<endl;
        else
        if(n%m!=0)
        {
            cout<<(m-n%m)<<endl;
        }    
    }

    return 0;
}