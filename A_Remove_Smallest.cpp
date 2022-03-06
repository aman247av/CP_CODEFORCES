#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while(n--){
    vector<int> arr;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int arr_val;
        cin>>arr_val;
        arr.push_back(arr_val);
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin()+i);
            i--;
        }
        else
       

        if((arr[i+1]-arr[i])==1){
           
                arr.erase(arr.begin()+i); 
                i--;
                   
        }
    }
 
     if(arr.size()==1)
     cout<<"YES"<<"\n";
     else
     cout<<"NO"<<"\n";
     
}
    

    return 0;
}