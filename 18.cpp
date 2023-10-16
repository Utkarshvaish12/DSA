#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>

using namespace std;

bool find(vector<int> &a,int x)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        set<int> s(a.begin(),a.end());
        s.erase(a[i]);
        if(s.find(x-a[i])!=s.end())
            return true;
        else
            continue;    
    }
    return false;
}

int main()
{
vector <int> nums = {11, 15, 6, 8, 9, 10};
int X = 161;
cout<<"Output: "<<boolalpha<<find(nums,X)<<endl;
    return 0;
}