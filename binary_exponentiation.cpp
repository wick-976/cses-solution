//time complexity of the binary exponentiation is O(log n) 
//. where a=3 and b=13 res=1 for our understanding first we will have 3 then beacuse
/*the lst bir is set(1). and we do the a*a which is 9 where 3^2 but i t doesnt car 
about any condition i t only jos is to produce powers 1 2 4 8 where in this we 
need 1 4 8 now the res is 3 where a is 9 next bit is 0 so we dont enter 
the res beacuse we dont want thaf we dont need 3^2 and a contiuse to 
double and it beomes 3^4 now acoording to our algorithm we need that 3^4 
so bit is also one we take the res=res*a where res is already 3^1 here a is
3^4 so it becomes 3^5 and our a doecnt care about anyhitng it vontinues to double 
3^8 and the nxt bit is alos one and we need this 3^8 so we simply res*a where res 
already have the 3^5 * 3^8 which gives the answer and this is the while idea
*/

#include <bits/stdc++.h>
using namespace std;
#define LL long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    LL a,b;
    cin>>a>>b;

    LL res=1;

    while(b>0)
    {
        if(b&1)
    {
        res=res*a;
    }    
    a*=a;
    b>>=1;

}

cout<<res;






}