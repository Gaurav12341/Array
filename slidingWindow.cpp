#include<bits/stdc++.h>
using namespace std;

int sliding(int arr[],int size, int k){
    int res=INT_MIN;
    for(int i=0;i+k-1<size;i++){
        int curr=0;
        for (int j = 0; j < k; j++)
        {
            curr+=arr[i+j];
        }
        res=max(res,curr);
        
    }
    return res;
}

int main(){
    int arr[]={10,5,-2,20,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    cout<<"The maximum sum of k elements in the array is "<<sliding(arr,size,k);
}