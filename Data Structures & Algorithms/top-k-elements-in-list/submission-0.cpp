class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ; 
        for(int i=0;i<nums.size(); i++)
        {
            mp[nums[i]]++; 
        }
        vector<pair<int,int>> v; 
        for (auto &entry : mp)
        {
            v.push_back({entry.second, entry.first}); 
        }
        // sort by descending order ---
        sort(v.rbegin(), v.rend()); 
        vector<int> kelement ; 
        for(int i=0;i<k; i++)
        {
          kelement.push_back(v[i].second); 
        }
        return kelement ; 
    
    
    }
};
