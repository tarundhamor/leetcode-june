class Solution {
public:
    int change(int amount, vector<int>& coins) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> dp(amount + 1,0);
        dp[0] = 1;
        
    for(auto coin : coins){
        for(int i=coin; i<=amount; i++){
            dp[i] = dp[i] + dp[i-coin];
        }
    }
        return dp[amount];
    }
};