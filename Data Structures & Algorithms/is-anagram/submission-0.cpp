class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false ; 
        map<char,int> mp;
        for (char c: s)
        {
            mp[c]++; 
        }
        for(char c : t)
        {
            if(mp.find(c)==mp.end()||mp[c]<=0){
                return false ;
            }
            else mp[c]--; 

        }
        return true ; 
        
    }
};
