#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
  
    for(long long k=1;k<=n;k++)
    {
         long long t_cells= k*k;
        if(k==1){
            cout<<0<<"\n";
        }
        else
        {
            
            //to find the total moves
               long long total=(t_cells*(t_cells -1))/2;
               
               
            //to find the attacking position
            long long slap=(k-2)*(k-1)*2*2;
            
            cout<<total - slap<<"\n";
        }
        
       
    }
    
}