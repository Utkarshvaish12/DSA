/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(int x) {
        long r=0;
        int x1=x; 
        if(x<0)     return false;
        while(x){
         r=r*10+x%10;
         x=x/10; 
        }
        return (x1==r); 
    }
int main()
{
    cout<<boolalpha<<isPalindrome(321);
    return 0;
}   