#include<bits/stdc++.h>
using namespace std;

int diff(int arr[],int size){
    int size2=1;
    int arr2[size2];
    int difference=0;
    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            int difference2=arr[j]-arr[i]; 
            if (difference2> difference)
                difference=difference2;
        }
    }
    return difference;
    
    
}

int main(int argc, char const *argv[])
{
    int arr[]={2,3,10,6,4,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum difference in the array is: "<<diff(arr,size);
    return 0;
}
