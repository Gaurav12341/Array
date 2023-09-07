#include<bits/stdc++.h>
using namespace std;

void freq(int arr[],int size){
    int i=1,frequency=1;
    while(i<size){
        if(arr[i]==arr[i-1]){
            frequency++;
            i++;
        }
        else{
            cout<<arr[i-1]<<" - "<<frequency<<endl;
            frequency=1;
            i++;
        }
    }

    if(size==1 || arr[size-1]!=arr[size-2] )
        cout<<arr[size-1]<<" - "<<"1";
}

int main(int argc, char const *argv[])
{
    int arr[]={10,10,10,30,30,40};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The frequencies of different elements of the array are as Follows:"<<endl;
    freq(arr,size);
    return 0;
}
