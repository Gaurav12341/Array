#include<bits/stdc++.h>
using namespace std;

int consecutive(bool arr[],int size){
    int res=0,curr=0;
    for (int i=0;i<size;i++){
        if(arr[i]==0){
            curr=0;
        }
        else
            {
                curr++;
                res=max(res,curr);
            }

    }
    return res;
}

int main(int argc, char const *argv[])
{
    bool arr[]={0,1,1,1,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum no. of consecutive 1's are: "<<consecutive(arr,size);
    return 0;
}
