#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    int c;
    cin>>s1>>s2;
    for (int i = 0; i < s1.length(); i++)
  	{
  		
          s1.at(i)=tolower(s1.at(i));
          s2.at(i)=tolower(s2.at(i));
  	}
    

    for(int i=0;i<s1.length();i++){
        if(s1.at(i)==s2.at(i))
            c=0;
        if(s1.at(i)-s2.at(i)>0){
            c=1;
            break;
            }
        else
            {
                if(s1.at(i)-s2.at(i)<0){
                    c=-1;
                    break;
                }
            }        
    }
    if(c==0)
    cout<<0;
    else if(c>0)
         cout<<1;
         else 
            cout<<-1;
    

    return 0;
}