class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low = 0, high = n-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(citations[n-mid-1]> mid)
                low = mid + 1;
            else
                high = mid - 1;
        }
        
        return low;
    }
};