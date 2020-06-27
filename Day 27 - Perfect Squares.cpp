class Solution {
public:
    int numSquares(int n) {
         vector<int> result(n+1);
        for(int i=0;i<=n;i++){
            result[i] = i;
            for(int j=1;j*j<=i;j++){
                result[i] = min(result[i-j*j]+1,result[i]);
            }
        }
        return result[n];
    }
};
