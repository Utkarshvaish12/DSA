#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> s;
        int t;
        for(int i=0;i<nums.size();i++)
        {
            set<int> h;
             for(int j=i+1;j<nums.size();j++)
             {
                t=-(nums[i]+nums[j]);
                if(h.find(t)!=h.end())
                {
                    vector<int> temp={nums[i],nums[j],t};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
                h.insert(nums[j]);
             }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }

int main()
{
vector <int> nums = {-1,0,1,2,-1,-4};
vector<vector<int>> v;
v=threeSum(nums);
cout<<"Output: "<<endl;
for (int i = 0; i < v.size();i++) {
        for (int j = 0; j <v[i].size();j++) {
            cout <<v[i][j] << " ";
        }
        cout<<endl;
}
    return 0;
}