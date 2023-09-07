#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void insertinarray(int arr[], int size, int key, int position , int capacity){
    if (capacity==size)
        cout<<"Cant be inserted";
    else
        for(int i= size-1; i>= position-1; i--){
            arr[i+1]=arr[i];
        }
        arr[position-1]=key;
        size++;
        printarray(arr, size);
 }


int main()
{
    int arr1[]={1,2,3,4,5,6};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int capacity= 10;

    printarray(arr1,size);
    cout<<"New array after insertion is :" <<endl;

    insertinarray(arr1, size, 20, 4, capacity);   
}