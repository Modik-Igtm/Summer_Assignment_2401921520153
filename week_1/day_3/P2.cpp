//Squares of sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        for(int i : nums)
        {
            int a = i * i;
            res.push_back(a);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
   