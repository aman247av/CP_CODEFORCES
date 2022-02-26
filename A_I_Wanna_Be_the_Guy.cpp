#include<bits/stdc++.h>
using namespace std;

int main(){
    int lvl,x1,x2;
    cin>>lvl>>x1;
    set<int> s;

    for(int i=0;i<x1;i++){
        int n;
        cin>>n;
        s.insert(n);
    }
    cin>>x2;
    for(int i=0;i<x2;i++){
        int n;
        cin>>n;
        s.insert(n);
    }
    
    if(*s.begin()==0)
        if(s.size()-1==lvl)
            cout<<"I become the guy.";
        else
            cout<<"Oh, my keyboard!";
    else  
        if(s.size()==lvl)
            cout<<"I become the guy.";
        else
            cout<<"Oh, my keyboard!"; 

    return 0;
}