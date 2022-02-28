#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> val;
    for(int i=0;i<=1000;i++){
        char n;
        cin>>n;
        if(n>=97&&n<=122)
            val.insert(n);
    }
    cout<<val.size();
    return 0;
}