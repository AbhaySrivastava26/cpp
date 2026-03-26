#include<bits/stdc++.h>
using namespace std;
int knapsack(int index,int w,vector<int>&wt,vector<int>&val,vector<vector<int>>&dp){
    if(index==0){
        if(wt[0]<=w){
            return val[0];
        }else {
            return 0;
        }
    }
    if(dp[index][w]!=-1) return dp[index][w];
    int nottake=knapsack(index-1,w,wt,val,dp);
    int take=0;
    if(wt[index]<=w){
        take=val[index]+knapsack(index-1,w-wt[index],wt,val,dp);
    }
    return dp[index][w]=max(take,nottake);
}

int main(){
     vector<int> wt = {1,2,4,5};
    vector<int> val = {5,4,8,6};
    int W = 5;
    int n = wt.size();
     vector<vector<int>> dp(n, vector<int>(W+1, -1));


    cout << knapsack(n-1, W, wt, val,dp);
}