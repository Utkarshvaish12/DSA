#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int a[]={3,1,2,5,3};
sort(a,a+(sizeof(a)/sizeof(a[0])));
for(int i=0;i<sizeof(a)/sizeof(a[0])-1; i++)
{
if(a[i]==a[i+1])
cout<<a[i]<<" ";
if(a[i]!=a[i+1] && a[i+1]!=a[i]+1)
cout<<a[i]+1<<endl;
}
    return 0;
}