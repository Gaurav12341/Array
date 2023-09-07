#include<bits/stdc++.h>
using namespace std;

int consecutive(int arr[],int size){
    int res=0;
    for(int i=0;i<size;i++){
        int curr=0;
        for(int j=i;j<size;j++){
            if(arr[j]==1)
                curr++;
            else
                break;
        }
        res=max(res,curr);
    }
    return res;
}

int main(int argc, char const *argv[])
{

    int arr[]= {0,1,1,1,0,1,1};
    int size= sizeof (arr)/sizeof(arr[0]);

    cout<<"The number of consecutive 1's in the array are: "<<consecutive(arr,size);

    return 0;
}
