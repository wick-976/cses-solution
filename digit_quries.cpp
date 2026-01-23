#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;              // size of array

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;              // number of queries

    while(q--) {
        int index;
        cin >> index;

        if(index >= 0 && index < n) {
            cout << arr[index] << endl;
        }
    }

    return 0;
}
