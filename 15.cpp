#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool check(vector <int> &a,int X)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]+a[j]==X)
                return true;
        }
    }
return false;

}
int main()
{
vector <int> nums = {11, 15, 26, 38, 9, 10};
int X = 35;
cout<<"Output: "<<boolalpha<<check(nums,X)<<endl;
    return 0;
}