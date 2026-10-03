class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> grpAnag; 
        map<string,vector<string>> mp ;
        for(string s : strs )
        {
            string key= s ;
            sort(key.begin(),key.end()); 
            mp[key].push_back(s);

        }
        for(auto &entry: mp)
        {
            grpAnag.push_back(entry.second); 
        }
        return grpAnag; 
        

        
    }
};
