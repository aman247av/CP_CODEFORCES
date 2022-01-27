#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0,r=0;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            cin>>a[i][j];
        cout<<endl;    
            }


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                c=abs(2-i);
                r=abs(2-j);
                break;
            }    
        }
    }
    cout<<(c+r);
              
    return 0;
}