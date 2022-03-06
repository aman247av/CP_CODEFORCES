#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
   //sol 1 
    int min=arr[0];
    int max=arr[0];
    int c=0;
    for(int i=1;i<len;i++){
        if(arr[i]>max) {
            c++;
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
            c++;
        }
        else
            continue;

}
cout<<c;

//sol2

//     int max=0,min=10000;
//     for(int i=1;i<len;i++){
//         for(int j=0;j<=i;j++){
//             if(arr[j]>max || arr[j]<min){
//                 c++;
//             }
//             if(arr[j]>max){
//                 max=arr[j];
//             }
//             if(arr[j]<min){
//                 min=arr[j];
//             }
            
//         }
//        // cout<<c<<"\n";
//     }
//     if(c!=0)
// cout<<c-1<<"\n";
// else
// cout<<c;
    return 0;
}