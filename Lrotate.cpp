#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int position, int size)
{
    int temp[size];
    int k=0;

    for(int i=position; i<size; i++){
        temp[k]=arr[i];
        k++;
    }

    for (int i=0 ; i<position ;i++){
        temp[k]=arr[i];
        k++;
    }
    
    for (int i=0; i<size;i++){
        arr[i]=temp[i];
    }
}

void printarray(int arr[], int size)

{
    for (int i =0; i<size; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr1[]= {1,2,3,4,5,6,7};
    int posi=2;
    int size=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Rotated array is :"<<endl;
    rotate(arr1, posi,  size);
    printarray(arr1,size);
    
    return 0;
}