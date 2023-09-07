#include<bits/stdc++.h>
using namespace std;

int sliding (int arr[],int size,int k){
    int curr=0;
    for (int i = 0; i < k; i++)
    {
        curr+=arr[i];
    }
    int res=curr;
    for (int i = k; i < size; i++)
    {
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
    
    
}

int main(){
    int arr[]={1,8,30,-5,20,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    cout<<"The madximum sum of k elements in the array is: "<<sliding(arr,size,k);

}