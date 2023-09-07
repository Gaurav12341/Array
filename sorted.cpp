#include<bits/stdc++.h>
using namespace std;

int sorted(int arr[],int size){
    for (int i=0;i<size;i++){
        if (arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,20,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    if(sorted(arr,size)==0)
        cout<<"Array is not sorted";
    else    
        cout<<"array is sorted";
    return 0;
}
