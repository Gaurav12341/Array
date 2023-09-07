#include<bits/stdc++.h>
using namespace std;

void maxsubarraysum(int arr[], int size)
{
    int maxsum=arr[0];
    for(int i=0;i<size;i++){               //starting point
        for (int j=i;j<size;j++){          //ending point
            int sum=0;
            for (int k=i; k<=j;k++)        //elements between starting and ending points
                // cout<<arr[k]<<" ";
            {
                sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
        }
        
    }
    cout<<maxsum;
}

void printarray(int arr[], int size){
    for (int i =0; i<size; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr1[]={-1,4,7,2};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    printarray(arr1,size);

    cout<<"Max subarray sum is: ";
    maxsubarraysum(arr1, size);
}