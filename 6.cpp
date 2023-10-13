 #include<iostream>
 #include<vector>
 using namespace std;   
    
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            return i;
        }
        return -1;
    }

    int main()
    {
        vector<int> a={1,2,3,4,6,9,8};
        cout<<"Output : "<<search(a,9);
        return 0;
    }