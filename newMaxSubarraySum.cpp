#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

int maxsubarray(int arr[],int size){
    int maxi=arr[0];
    for (int i = 0; i < size; i++)
    {   int curr=0;
        for (int  j = i; j < size; j++)
        {
            curr=curr+arr[j];
            maxi=max(curr,maxi);
        }
    }
    return maxi;
    
}

int main(){
    int arr[]={1,-2,3,-1,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    printarray(arr,size);

    cout<<"\nThe maximum subarray Sum of the array is: "<<maxsubarray(arr,size);
}