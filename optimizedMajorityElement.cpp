#include<bits/stdc++.h>
using namespace std;

int majority(int arr[],int size){
    int res=0,count=1;
    for(int i=1;i<size;i++){
        if(arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<size;i++){
        if (arr[res]==arr[i])
            count++;
    }

    if (count<=size/2)
        res=-1;
    
    return res;
}

int main(){
    int arr[]={6,8,4,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The majority element in the array is: "<<majority(arr,size);
}