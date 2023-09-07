#include<bits/stdc++.h>
using namespace std;

int subarraysum(int arr[],int size){
    int res=arr[0];
    int prevMax=arr[0];

    for (int i = 1; i < size; i++)
    {
        prevMax=max(prevMax+arr[i],arr[i]);
        res=max(prevMax,res);
    }
    return res;
    
}

int main(int argc, char const *argv[])
{
    int arr[]={-5,1,-2,3,-1,2,-2};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum subarray sum in the array is: "<<subarraysum(arr,size);
    return 0;
}
