#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++)
        if(arr[i]==arr[i+1])
            count++;
    return size-count;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,3,4,4,5,6};
    int size= sizeof(arr)/sizeof(arr[0]);

    cout<<"Number of distinct elements in the sorted array are: "<<duplicate(arr,size);
    return 0;
}
