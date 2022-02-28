#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    

    char s[len];
    cin>>s;   
    int c=0; 
    for(int j=65;j<=90;j++){
    for(int i=0;i<len;i++){
        int ch = toupper(s[i]);
        if(ch==j)
        {
            c++;
            break;
        }
        
    } 
    }

    if(c==26)
    cout<<"YES";
    else 
    cout<<"NO"; 

    return 0;
}