#include<bits/stdc++.h>
using namespace std;

void Rrotate(int arr[], int position, int size){
    position=position % size;

    for (int i=0; i<size;i++){
        if(i<position)
            cout<<arr[size+i-position]<<endl;
        else   
            cout<<arr[i-position]<<endl;
    }

}

void printarray(int arr[], int size){
    for (int i=0; i<size; i++)
        cout<<arr[i]<<endl;
}


int main(){

    int arr1[]={1,2,3,4,5};
    int posi=2;
    int size= sizeof(arr1)/sizeof(arr1[0]);

    printarray(arr1, size );

    cout<<"Rotated array is:"<<endl;
    Rrotate(arr1, posi, size);
    return 0;
}