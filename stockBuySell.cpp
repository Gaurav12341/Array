#include<bits/stdc++.h>
using namespace std;

int maxprofit(int price[],int size){
    int profit=0;
    for (int i = 1; i < size; i++)
    {
        if(price[i]>price[i-1])
            profit+=price[i]-price[i-1];
    }
    return profit;
    
}

int main()
{
    int arr[]={1,5,3,8,12};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum profit gained would be: "<<maxprofit(arr,size);
    return 0;
}
