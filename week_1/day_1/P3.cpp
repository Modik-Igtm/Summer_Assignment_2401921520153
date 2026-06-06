//Best time to buy and sell stock
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
            min=prices[i];
            else
        { int profit=prices[i]-min;

        if(profit>max)
        
            max=profit;
        
        }}
        return max;
    }
    
};