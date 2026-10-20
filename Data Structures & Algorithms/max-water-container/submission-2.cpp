class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0 ; 
        int j = heights.size()-1 ; 
        int lastprod= 0; 
        while(i<j )
        {
             int mini= min(heights[i], heights[j]); 
              int diff = j-i ; 
               int prod = mini*diff ; 
              if(prod>lastprod) lastprod =prod; 
              if(heights[i]<heights[j])i++; 
              else j--; 
        }
    
        return lastprod; 
        
    }
};
