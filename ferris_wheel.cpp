#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> application_no(n);

    for(int i = 0; i < n; i++)
    {
        cin >> application_no[i];
    }

    sort(application_no.begin(), application_no.end());

    int i = 0;
    int j = n - 1;
    int ferris = 0;

    while(i <= j)
    {
        if(i == j)
        {
            ferris++;
            break;
        }

        if(application_no[i] + application_no[j] <= x)
        {
            i++;
            j--;
            ferris++;
        }
        else
        {
            j--;
            ferris++;
        }
    }

    cout << ferris;
}