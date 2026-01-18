// Approach: Brute force over subsets using bitmasking
// Time Complexity: O(n * 2^n)
// Reason: n <= 20

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    long long total = 0;
    for (long long x : p)
    {
        total += x;
    }

    long long ans = LLONG_MAX;

    // Loop through all subsets
    for (long long mask = 0; mask < (1 << n); mask++)
    {
        long long subsetsum = 0;

        // Check each bit
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                subsetsum += p[i];
            }
        }

        long long diff = abs(total - 2 * subsetsum);
        ans = min(ans, diff);
    }

    cout << ans << endl;
    return 0;
}
