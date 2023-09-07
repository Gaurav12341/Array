#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int deleteElement(int arr[], int size, int key){
    int i;
    for ( i =0;i<size; i++){
        if (arr[i]==key)
            break;
    }
    if(i==size){
        cout<<"ellement not found in the array";
        printarray(arr,size);
        return size;
    }
    
    for (int j=i;j<size;j++){
        arr[j]=arr[j+1]; 
    }
    size--;
    cout<<"New array is: ";
    printarray(arr,size);
    return size; 
}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int size= sizeof(arr1)/sizeof(arr1[0]);
    int key=3;

    cout<<"\nSize of the new array is: "<<deleteElement(arr1,size, key);
    
}