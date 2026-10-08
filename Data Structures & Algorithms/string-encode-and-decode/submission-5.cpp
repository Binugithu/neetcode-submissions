class Solution {
public:
    string encode(vector<string>& strs) { 
        string s=""; 
        if (strs.empty()) return ""; 
        for(string str : strs)
        {
            s+=to_string(str.size()); 
            s+="#"; 
            s+=str; 
        }
        return s; 

    }

    vector<string> decode(string s) {
        vector<string>output; 
        int i=0; 
        while (i<s.size())
        {

           int j =i; 
           while(j<s.size() && s[j]!='#')
           {
            j++; 
           }
           int len = stoi(s.substr(i, j-i));
           j++;
           string word =s.substr(j,len); 
           output.push_back(word);
           i=j+len; 
        }
        return output ; 

    }
};
