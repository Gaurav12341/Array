#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[],int size){
    for(int i=0;i<size;i++){
    int ls=0, rs=0;
    for (int j = 0; j < i; j++)
    {
        ls+=arr[j];
    }

    for (int k = i+1; k < size; k++)
    {
        rs+=arr[k];
    }

    if(ls==rs)
        return i;
    
    }
    return -1;
}

int main(){
    int arr[]={3,4,8,-9,9,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The equilibrium point of the array: "<<equilibrium(arr,size);
}