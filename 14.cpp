#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int low = 0,high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;

            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else
            {
                
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
            
        }
        return ans;
    }

int main()
{
vector <int> nums = {4,5,6,7,0,1,2};
cout<<"Output: "<<findMin(nums)<<endl;
    return 0;
}