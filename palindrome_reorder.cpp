    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s;
        cin>>s;
        
        unordered_map<char,int> freq;//AAABB
        for(char ch: s){
            freq[ch]++;
        }
        
        char center='0';
        int oddcount=0;
        
         for(const auto& [ch,count] : freq){
            if(count % 2 == 1){
                oddcount++;
                center = ch;
    
                if(oddcount > 1){
                    cout << "NO SOLUTION";
                    return 0;
                }
            }
        }
        string result;
        result.reserve(s.length()); 
        
        for(const auto& [ch,count]: freq){
            result.append(count/2,ch);//3*J
        }
        
        if(center!='0'){
            result+=center;
        }
        
        int firsthalfsize=s.length()/2;
        
        for(int i=firsthalfsize-1;i>=0;i--){
            result.push_back(result[i]);
        }
        cout<<result;
    }