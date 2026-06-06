//Reverse string 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>result;
       for(int i=s.size()-1;i>=0;i--)
        {
        result.push_back(s[i]);
        }
        s=result;
    }
};