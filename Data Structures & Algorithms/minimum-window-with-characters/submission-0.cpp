class Solution {
public:
    string minWindow(string s, string t) {

        if(s.length()<t.length())return "";

        unordered_map<char,int> freq;
        unordered_map<char,int> check;

        for(int i=0;i<t.length();i++){
            freq[t[i]]++;

        }
        int req=freq.size();
        int left=0;
        int formed=0;
        int anslen=INT_MAX;
        int start=0;
        for(int right=0;right<s.length();right++){
            check[s[right]]++;

            if(freq.count(s[right])&&check[s[right]]==freq[s[right]]){
                formed++;
            }
            while(formed==req){
                check[s[left]]--;
                if(right-left+1<anslen){
                    anslen=right-left+1;
                    start=left;
                }
                if(freq.count(s[left])&&check[s[left]]<freq[s[left]]){
                    formed--;
                }
                left++;
                
                
            }
            
        }
        if(anslen==INT_MAX)return "";
        return s.substr(start,anslen);


        
    }
};
//first well store the freq of string t in a hashmap 
//then we increment the window until we get those req freq of other hashmap and until its not valid we decrement the window then store in the ans min(ans,window size) until the end