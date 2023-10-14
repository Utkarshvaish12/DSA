#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

   vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);
        vector<int> right_Product(n);
        left_Product[0] = nums[0];
        for(int i=1; i<n; i++){
            left_Product[i] = left_Product[i-1] * nums[i];
        }
        right_Product[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            right_Product[i] = right_Product[i+1] * nums[i];
        }
        ans[0]=right_Product[1];
        ans[n-1]=left_Product[n-2];
        for(int i=1; i<n-1; i++){
            ans[i] = left_Product[i-1] * right_Product[i+1];
        }
        return ans;
    }

int main()
{
    vector<int> nums ={1,2,3,4};
    vector<int> ans=productExceptSelf(nums);
    cout<<"Output: ";
    for(int i=0;i<nums.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}