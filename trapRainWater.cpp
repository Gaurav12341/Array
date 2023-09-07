#include<bits/stdc++.h>
using namespace std;
int getWater(int arr[],int size){
    int result=0;
    for (int i = 1; i < size-1; i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }

        int rmax=arr[i];
        for (int j = i+1; j < size; j++)
        {
            rmax=max(rmax,arr[j]);
        }
        
        result=result+ min(lmax,rmax)-arr[i];
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    int arr[]={3,0,1,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The amount of watter that could be trapped is: "<<   getWater(arr,size);
    return 0;
}