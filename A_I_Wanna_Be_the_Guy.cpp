#include<bits/stdc++.h>
using namespace std;

int main(){
    int lvl;
    cin>>lvl;
    set<int> s;

    for(int i=0;i<2*lvl;i++){
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