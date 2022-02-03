#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,nn,d,c;
    cin>>n;
    
    if(n>=1&&n<=9)
    cout<<1<<endl;
    else{

    string s=to_string(n);
    int len=s.length();
    int ch=s.at(0)-'0';
    ch++;

    int gg=ch *pow(10,(len-1));

    cout<<gg-n<<endl; 
    }
    

    return 0;
}