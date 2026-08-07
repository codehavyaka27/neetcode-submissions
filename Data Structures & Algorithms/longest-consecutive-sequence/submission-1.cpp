class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);

        }
       
        int maxi=1;
        for(int i=0;i<nums.size();i++){
            if(!st.count(nums[i]-1)){
                int count=1;
                int j=nums[i]+1;
                while(st.count(j)){
                    count++;
                    j++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
        
    }
};
