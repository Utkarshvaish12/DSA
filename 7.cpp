#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums ={3,2,1};
    cout<<next_permutation(nums.begin(),nums.end());
    return 0;
}