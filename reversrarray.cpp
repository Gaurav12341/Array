#include<bits/stdc++.h>
using namespace std;

void reversedarray( int arr[], int start , int end)
{
    if (start>= end)
        return;
    int temp= arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reversedarray(arr , start+1, end-1);
}

void printarray(int arr[], int size){

    for (int i =0; i<size ; i++){

        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr1[]= {1,2,3,4,5,6};
    printarray(arr1,6);


    reversedarray(arr1, 0, 5 );
    cout<<"Reversed Array is:"<<endl;
    printarray(arr1, 6);
    return 0;
}