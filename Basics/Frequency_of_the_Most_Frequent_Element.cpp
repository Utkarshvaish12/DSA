/*
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, 
you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at 
most k operations.
*/

#include<bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
         sort(nums.begin() , nums.end());
         int number = k;
         int high = n - 1;
         int low = n - 1;
         int result = 0;
         while(low >= 0){
             while(low>=0 && high>=0 && (number >= (nums[high] - nums[low]))){
                 number -= (nums[high] - nums[low]);
                 low--;
             }
             result = max(result , high - low);
             int count = high - low - 1;
             if(high>0)number+=(count * (nums[high]-nums[high-1]));
             high--;
         }
         return result;
    }

int main()
{
    vector<int> nums = {1,2,4};
    int k = 5;
    cout<<maxFrequency(nums,k)<<endl;
    return 0;
}    