class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>freq;
        unordered_map<char,int>check;

        for(int i=0;i<s1.length();i++){
            freq[s1[i]]++;
        }
        int left=0;
        for(int i=0;i<s2.length();i++){
           check[s2[i]]++;


           if(i-left+1>s1.length()){
            check[s2[left]]--;
            if (check[s2[left]] == 0)
            check.erase(s2[left]);
            left++;

           }
           if (i-left + 1 == s1.length()) {
            if (check == freq)
                return true;
           }

           
        }
        return false;

        
    }
};
