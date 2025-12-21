class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        long long Sn = (1LL * n * (n + 1)) / 2;
        long long S2n = (1LL * n * (n + 1) * (2 * n + 1)) / 6;

        long long S = 0, S2 = 0;
        for (int i = 0; i < n; i++) {
            S += nums[i];
            S2 += 1LL * nums[i] * nums[i];
        }

        long long value1 = S - Sn;        // x - y
        long long value2 = S2 - S2n;      // x^2 - y^2

        value2 = value2 / value1;         // x + y

        long long X = (value1 + value2) / 2;  // repeating
        long long Y = X - value1;              // missing

        return {(int)X, (int)Y};
    }
};
