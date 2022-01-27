#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0,d=0;
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
            cout<<endl;
        }

        if(a[r-1][c-1]=='B'){
            cout<<0<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){          
                if(a[i][j]=='W')
                    d++;    
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[r-1][j]=='B'||a[i][c-1]=='B'){
                    cout<<++count<<endl;
                    flag=true;
                    break;
                    }
            }
            if(flag)
                break;
        }
         if(n*m==d)
            cout<<-1<<endl;
            else
        if(count!=1)
        cout<<2<<endl;
        
    }
    return 0;
}