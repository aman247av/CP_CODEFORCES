#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<len;i++){
        if(s.at(i)=='A')
            a++;
            else 
            b++;
    }
    if(a>b)
        cout<<"Anton"<<endl;
        else if(b>a)
                cout<<"Danik"<<endl;
                else if(a==b)
                cout<<"Friendship"<<endl;

    return 0;
}