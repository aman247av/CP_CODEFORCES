#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,c=1,sum=0,k=0;
    cin>>x;
    for(int i=5;i>=1;i--){
        while((x-c)>=0){
            c=c+i;
            k++;
        }

    }
    cout<<k;

    return 0;
}