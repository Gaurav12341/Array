#include<bits/stdc++.h>
using namespace std;

int majority(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if (arr[j]==arr[i])
                count++;
            if(count>size/2)
                return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={8,7,6,8,6,6,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The majority element in the array is present at index: "<<majority(arr,size);
}