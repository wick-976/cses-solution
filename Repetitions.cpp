#include <bits/stdc++.h>
using namespace std;
int main(){
    string repeating_sequence;
    cin>>repeating_sequence;
    int n=repeating_sequence.size();
    int max_count=1,current_count=1;
    for(int i=1;i<n;i++){
        if(repeating_sequence[i]==repeating_sequence[i-1]){
            current_count++;
        }
        else{
           current_count=1;
        }

        max_count=max(max_count,current_count);
    }
    cout<<max_count;
}