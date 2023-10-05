#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }

int main()
{   
    vector <int> v={1,2,3,1};
    cout<<"Output: "<<boolalpha<<containsDuplicate(v)<<endl;
    return 0;
}