#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin >>v[i];
    }
    sort(v.begin(),v.end());

    auto jos=unique(v.begin(),v.end());

    cout<<(jos-v.begin())<<endl;
    return 0;


}