#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int rainwater(int a[],int n)
{
    
    int l[n],r[n];
    l[0]=a[0];

    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],a[i]);
    }
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
        ans=ans+(min(l[i],r[i])-a[i]);
    return ans;    
}


int main()
{
    int height[] ={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(height)/sizeof(height[0]);
    cout<<"Output: "<<rainwater(height,n)<<endl;
    return 0;
}