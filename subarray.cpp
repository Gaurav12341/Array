#include<bits/stdc++.h>
using namespace std;

bool subarray(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        int curr=0;
        for (int j = i; j < size; j++)
        {
            curr+=arr[j];
            if (curr==sum)
                return true;
        }
    }
    return false;
}

int main(){
    int arr[]={1,4,20,3,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=33;

    cout<<"The subarray of sum in array exists: "<<subarray(arr,size,sum);
}