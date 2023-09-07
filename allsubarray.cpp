#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[], int size)
{
    for(int i=0;i<size;i++){               //starting point
        for (int j=i;j<size;j++){          //ending point
            for (int k=i; k<=j;k++)        //elements between starting and ending points
                cout<<arr[k]<<" ";
            cout<<endl;
        }
        
    }
}

void printarray(int arr[], int size){
    for (int i =0; i<size; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr1[]={-1,4,7,2};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    printarray(arr1,size);

    cout<<"Subarrays are:";
    subarray(arr1, size);
}