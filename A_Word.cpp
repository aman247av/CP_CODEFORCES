#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

    string s;
    int C=0,S=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s.at(i)))
            C++;
            else
            S++; 
    }
    if(C>S)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl;    
    return 0;
}