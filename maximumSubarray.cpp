#include<bits/stdc++.h>
using namespace std;

int subarraySum(int arr[],int size){
    int res=arr[0];
    for(int i=0;i<size;i++){
        int curr=0;
        for (int j = i; j < size; j++){
            curr=curr+arr[j];
            res=max(res,curr);
        }
        
        
    }
    return res;
}

int main(int argc, char const *argv[]) 
{
    int arr[]={1,-2,3,-1,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum subarray sum of the array is: "<<subarraySum(arr,size);
    return 0;
}
