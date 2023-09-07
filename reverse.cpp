#include<bits/stdc++.h>
using namespace std;

void reversed(int arr[],int size){
    int low =0, high=size-1;
     while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
     }

     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The reversed array is: ";
    reversed(arr,size);
    return 0;
}
