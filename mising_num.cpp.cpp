#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n-1);  // only n-1 numbers are given
    long long sum = 0;
    
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    long long total = n * (n + 1) / 2;
    cout<< total - sum << endl;
    return 0;
}
