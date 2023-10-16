#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r+1);
        return arr[k-1];
    }

int main()
{
    int arr[]={7,10,4,3,20,15};
    int r=sizeof(arr)/sizeof(arr[0])-1;
    cout<<"Output : "<<kthSmallest(arr,0,r,3);

}    