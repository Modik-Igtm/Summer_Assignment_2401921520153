//Spiral matrix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int rowstart=0,rowend=nums.size()-1;
        int colstart=0,colend=nums[0].size()-1;
        vector<int>res;
        while(rowstart<=rowend&&colstart<=colend){
            for(int i=colstart;i<=colend;i++)
            {
                res.push_back(nums[rowstart][i]);
            }
            rowstart=rowstart+1;
            for(int i= rowstart;i<=rowend;i++)
            {
                res.push_back(nums[i][colend]);
            }
            colend=colend-1;
            if(rowstart<=rowend){
            for(int i= colend;i>=colstart;i--)
            {
                res.push_back(nums[rowend][i]);

            }
            rowend--;}
            if(colstart<=colend){
            for(int i=rowend;i>=rowstart;i--)
            {
                res.push_back(nums[i][colstart]);
            }
            colstart++;}
        }
        return res;}
};