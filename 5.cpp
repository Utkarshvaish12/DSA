/*
Given an array of N integers where each value represents the number of 
chocolates in a packet.
 Each packet can have a variable number of chocolates. 
 There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum 
chocolates and the packet with minimum chocolates given to the students is 
minimum.
*/

#include<iostream>
#include<climits>
#include<bits/stdc++.h>

using namespace std;

int findMinDiff(int arr[], int n, int m)
{
    if(n==0 || m==0)
        return 0;
    if(n<m)
        return 0;
    int min=INT_MAX;
    int d;
    sort(arr,arr+n);
    for(int i=0;i<n-m+1;i++)
    {
        d=arr[i+m-1]-arr[i];
        if(d<min)
            min=d;
    }        
    return min;

}

int main()
{
    int a[]={12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int n=sizeof(a)/sizeof(a[0]);
    int m;
    cout<<"Enter no. of student :";
    cin>>m;
    cout<<"\nOutput Min diff : "<<findMinDiff(a,n,m)<<endl;

    return 0;
}