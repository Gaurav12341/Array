#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int size){
    for(int i=0;i<size;i++){
        bool flag=false;
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if (flag==false)
            cout<<arr[i]<<" ";
        
    }

}

int main(){
    int arr[]={7,10,4,3,6,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The leader of the array is: ";
    leader(arr,size);
}