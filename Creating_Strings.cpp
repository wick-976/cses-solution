#include <bits/stdc++.h>
using namespace std;

#define len(x) int((x).size())

void print_permutations(map<char,int>& freq, string& cur, int n) {
    // base case
    if (len(cur) == n) {
        cout << cur << '\n';
        return;
    }

    // try each character
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch] > 0) {
            cur.push_back(ch);
            freq[ch]--;

            print_permutations(freq, cur, n);

            // backtrack
            freq[ch]++;
            cur.pop_back();
        }
    }
}

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) res *= i;
    return res;
}

int main() {
    string s;
    cin >> s;

    map<char,int> freq;
    for (char ch : s)
        freq[ch]++;

    // number of unique permutations
    int n = len(s);
    int denom = 1;
    for (auto &p : freq)
        denom *= factorial(p.second);

    cout << factorial(n) / denom << '\n';

    string cur = "";
    print_permutations(freq, cur, n);
}
