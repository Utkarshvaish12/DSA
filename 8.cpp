#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
     
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf)
                lsf = prices[i];
            pist = prices[i] - lsf;
            if(op < pist)
                op = pist;
        }
        return op;
    }

int main()
{
    vector <int> prices = {7,1,5,3,6,4};
    cout<<"Output : "<<maxProfit(prices);
    return 0;
}