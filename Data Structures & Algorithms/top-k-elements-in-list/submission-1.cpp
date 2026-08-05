class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        for(auto &it:mp){
            minheap.push({it.second,it.first});
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        for(int i=0;i<k;i++){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
        
    }
};
