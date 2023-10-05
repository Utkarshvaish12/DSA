/*
Given an integer array nums, find the 
subarray with the largest sum, and return its sum.
*/

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int m=nums[0];
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                {c++;
                if(nums[i]>m)
                    m=nums[i];
                }
        }
        if(c==nums.size())
            return m;

        int maxsum=0;
        int cursum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum=cursum+nums[i];
            if(cursum>maxsum)
                maxsum=cursum;
            if(cursum<0)
                cursum=0;    
        }
        return maxsum;
    }

int main()
{
    vector <int> v={-2,1,-3,4,-1,2,1,-5,4};
    int b=maxSubArray(v);
    cout<<"Max Sum : "<<b<<endl;
    return 0;
}    