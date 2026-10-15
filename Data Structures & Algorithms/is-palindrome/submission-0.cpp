class Solution {
public:
    bool isPalindrome(string s) {
        string comb; 
        for(int i=0;i<s.size(); i++)
        {
            if(isalnum(s[i])) comb+=tolower(s[i]); 
            
        }
        string rev= comb; 
        reverse(rev.begin(), rev.end()); 
        return (rev==comb); 
    
        
    }
};
