class Solution {
public:
    int trailingZeroes(int n) {
        long long div=5;
        long long ans=0;
        while(div<=n)
        {
            ans+=n/div;
            div*=5;
        }
        return ans;
    }
};