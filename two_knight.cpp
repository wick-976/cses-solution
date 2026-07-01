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
            long long ¸
            
            cout<<total - slap<<"\n";
        }
        
       
    }
    
}
//to find the non attacking placement of two knight we simply calculate the total position of two knight and then we subtract the attacking position from the total position
//here total=(t_cells*(t_cells -1))/2;  we have 2*2 where one time we have to do the 2*3 and 3*2 
//and (m-1) * (m-2) ==>2*3. and m-2 * m-1 ==>3*2 both are gonna give the samw result so we simply do the 
//* 2 one time  where another *2 is for where every rectanfgle(2*3 or 3*2 have two attacking position)
//so simply again *2 simply we can write it as 4*(m-1)*(m-2) m is total position (ex: n= 6.  m is 6*5/2)total positions