#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0,n=4;
    vector<int> a;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        a.push_back(n);
    }
    

    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                c++;
                a.erase(a.begin()+j);
                j--;
            }
            
            
   
        }
    }
    cout<<c;

    return 0;
}