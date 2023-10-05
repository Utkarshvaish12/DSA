/*
Given an array of size N.
The task is to find the maximum and the minimum element of the array
*/

#include<iostream>
using namespace std;

int main()
{
int a[]={2,3,5,6,7,9};
int h=a[0];
int s=a[0];
for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
{
    if(a[i]>h)
    h=a[i];
    if(a[i]<s)
    s=a[i];
} 
cout<<"Highest element : "<<h<<endl;
cout<<"Smallest element : "<<s<<endl;
return 0;
}