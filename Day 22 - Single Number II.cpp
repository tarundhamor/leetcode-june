class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        int ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
            if(x.second==1){
                 ans = x.first;
            }
        }
        return ans;
    }
};