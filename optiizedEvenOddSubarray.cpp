#include<bits/stdc++.h>
using namespace std;

int evenodd(int arr[],int size){
    int res=1;
    int curr=1;
    for(int i=1;i<size;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 &&arr[i-1]%2==0)){
            curr++;
            res=max(res,curr);
        }
        else
            curr=1;

    }
    return res;
}

int main(){
    int arr[]={5,10,20,6,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum length of even odd subarray is: "<<evenodd(arr,size);
}