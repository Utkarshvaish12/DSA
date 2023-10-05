/*
Given an array (or string), the task is to reverse the array/string.
*/

#include<iostream>
using namespace std;

int main()
{
    int a[]={2,4,5,6,7,9,1};
    int s=sizeof(a)/sizeof(a[0]);
    int b[s];
    for(int i=s-1;i>=0;i--)
        b[s-i-1]=a[i];
    cout<<"Reverse array: ";    
    for(int j=0;j<s;j++)
    cout<<b[j]<<" ";    

    return 0;
}