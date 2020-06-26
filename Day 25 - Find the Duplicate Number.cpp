class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), i = 0, counter = 0;
        int low = 1, high = n - 1, mid;
        
        while (low < high)
        {
            mid = low + (high - low) / 2;
            
            counter = 0;
            for (i = 0; i < n; ++i)
            {
                if (nums[i] <= mid)
                    ++counter;
            }
            
            if (counter > mid)
                high = mid;
            else 
                low = mid + 1;
        }
        
        return low;
    }
};