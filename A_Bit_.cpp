#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int x=0;
    while (t--)
    {
        string s;
        cin>>s;
        if(s==("++X") || s=="X++")
            x= 1+x;

        if(s=="X--" || s=="--X")
            x=x-1;         
    }
    cout<<x;
    

    return 0;
}