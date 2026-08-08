class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int left=0;
        unordered_set<char>st;
        for(int right=0;right<s.length();right++){

            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlen=max(maxlen,right-left+1);

        }
        return maxlen;
        
    }
};
//i think i can use hashset for this problem 
//just checcking if the curr char is present or not if present calculate length and erasing the char