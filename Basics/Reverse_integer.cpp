/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer
range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/
#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
        long r=0; 
        while(x){
         r=r*10+x%10;
         x=x/10; 
        }
        if(r>INT_MAX || r<INT_MIN) return 0; 
        return int(r); 
    }

int main()
{
    int x;
    x=reverse(321);
    cout<<"Reverse Integer: "<<x<<endl;
    return 0;
}
