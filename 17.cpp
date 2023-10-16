#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;




    int maxArea(vector<int>& height) {
        int maxi=0;
        int i=0;
        int a=0;
        int n= height.size()-1;
        while(i<n)
        {
                a=min(height[i],height[n])*(n-i);
                maxi=max(maxi,a);
                if(height[i]>=height[n])
                    n=n-1;
                else
                    i=i+1;    
        }
       return maxi; 
    }

int main()
{
vector <int> heights = {1,8,6,2,5,4,8,3,7};
cout<<"Output: "<<maxArea(heights)<<endl;
    return 0;
}    