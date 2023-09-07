#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int size){
    int curr_leader=arr[size-1];
    cout<<curr_leader<<" ";
    for (int i=size-1;i>=0;i--){
        if (arr[i]>curr_leader)
            {
                curr_leader=arr[i];
                cout<<curr_leader<<" ";
            }
    }
}


int main(int argc, char const *argv[])
{
    int arr[]={7,10,4,3,6,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The leader in the array are: ";
    leader(arr,size);
    return 0;
}
