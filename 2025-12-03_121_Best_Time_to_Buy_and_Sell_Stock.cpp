/*
Problem: 121. Best Time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Date: 2025-12-03
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long minPrice = LLONG_MAX;   // use long long to be safe
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) minPrice = price;
            int profit = price - (int)minPrice;
            if (profit > maxProfit) maxProfit = profit;
        }
        return maxProfit;
    }
};

