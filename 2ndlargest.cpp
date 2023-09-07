#include<bits/stdc++.h>
using namespace std;

int seclargest(int arr[],int size){
    int max=0;
    int secmax=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    
    
    for(int i=0;i<size;i++){
        if(arr[i]>secmax && arr[i]!=max)
            secmax=arr[i];
    }
    return secmax;
}

int main(int argc, char const *argv[])
{
    int arr1[]={10,50,100,20,15};
    int size=sizeof(arr1)/sizeof(arr1[0]);

    cout<<"The 2nd Largest element in the array is: "<<seclargest(arr1,size);

    return 0;
}
