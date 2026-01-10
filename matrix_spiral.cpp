#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long X,Y;
        cin>>Y>>X;
        long long ans;
        long long n=max(Y,X);
        long long base=(n- 1) * (n- 1);
        
        if(n%2==1){  //odd - row increasing //col decreasing
            if(n==Y){
                ans=base+X;
            }
            else{
                ans=n*n -Y + 1;
            }
        }
        
        else{            //even - row decreasing //col increasing
            if(n==Y){
                ans=n*n - X + 1;
            }
            else{
                ans=base+Y;
            }
        }
        
        cout<<ans<<"\n";
    }
    return 0;
}