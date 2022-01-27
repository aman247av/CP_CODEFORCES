#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.length();i++){
        char ch=s.at(i);
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')){
            cout<<'.';
            cout<<s.at(i);
            }

    }

    return 0;
}