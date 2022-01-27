#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> a;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='+')
            a.push_back(s.at(i));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    if(i!=a.size()-1)
        cout<<a[i]<<"+";
        else
        cout<<a[i];

    return 0;
}