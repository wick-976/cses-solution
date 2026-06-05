#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>apartment(n);
    for(int i=0;i<n;i++)
    {
        cin>>apartment[i];
    }
    
    vector<int>avail(m);
    for(int i=0;i<n;i++)
    {
        cin>>avail[i];
     
    }

    sort(apartment.begin(),apartment.end());
    sort(avail.begin(),avail.end());

    int i=0;
    int j=0;
    int count =0;
    
    while(i<n && j<m)
    {
        if(abs(avail[j] < apartment[i]-k))
        {
            j++;
        }
        else if(abs(avail[j]>apartment[i]+k))
        {
            i++;
        }

        else
        {
            count++;
            i++;
            j++;
        }
    }

    cout<<count<<endl;
}