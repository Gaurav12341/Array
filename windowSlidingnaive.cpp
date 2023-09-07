#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[],int size,int k){
    int res=INT_MIN;
    for(int i=0;i<size-k+1;i++)
    {
        int curr=0;
        for (int j = 0; j < k; j++)
        {
            curr+=arr[i+j];
        }
        res=max(curr,res);
        
    }
    return res;
}

int slidingmaxSum(int arr[],int size,int k){
    int curr=0;
    for(int i=0;i<k;i++){
        curr+=arr[i];
    }
    int res=curr;
    for(int i=k;i<size;i++){
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
}

int main(){
    int arr[]={10,5,-2,20,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k=3; //k consecutive elements of the array

    cout<<"The maximum sum of k consecutive elements of the array is: "<<slidingmaxSum(arr,size,k);
}