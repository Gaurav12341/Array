#include<bits/stdc++.h>
using namespace std;

void move(int arr[],int size){
    int count=0;
    for (int  i = 0; i < size; i++)
    {
        if(arr[i]==0)
            count++;
        else    
            cout<<arr[i]<<" ";
    }

    for (int i = 0; i < count; i++)
    {
        cout<<"0"<<" ";
    }
    
    
}

int main(int argc, char const *argv[])
{
    
    int arr[]={1,2,0,0,3,4,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"After moving the zeroes the array is: ";
    move(arr,size);
    return 0;
}
