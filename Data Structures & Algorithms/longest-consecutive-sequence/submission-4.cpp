class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ;
        vector<int> maxcnt; 
        sort(nums.begin(),nums.end()); 
        int cnt =1; 
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1]) continue; 
            else if(nums[i]==nums[i-1]+1) cnt++; 
            else 
            {
                maxcnt.push_back(cnt); 
                cnt=1; 
            }
        }
        maxcnt.push_back(cnt);
        return *max_element(maxcnt.begin(),maxcnt.end()) ; 

        
    }
};
