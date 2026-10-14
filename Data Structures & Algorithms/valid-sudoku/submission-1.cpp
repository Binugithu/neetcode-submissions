class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n= board.size(); 
        int m =board[0].size(); 
        unordered_set<int> unique ; 
        //checking rows 
        for (int i=0; i<n ; i++)
        {
            unordered_set<char> seen; 
            for(int j=0;j<m; j++)
            {
                char c =board[i][j]; 
                if(c=='.') continue ; 
                if(seen.count(c)) return false ; 
                seen.insert(c); 
            }
        }
        // checking columns 
        for (int j=0; j<m ; j++)
        {
            unordered_set<char> seen; 
            for(int i=0;i<n; i++)
            {
                char c =board[i][j]; 
                if(c=='.') continue ; 
                if(seen.count(c)) return false ; 
                seen.insert(c); 
            }
        }
        for(int rowInd=0;rowInd<n;rowInd+=3)
        {
            for(int colInd=0;colInd<m;colInd+=3)
            {
                unordered_set<char> seen; 
                for(int i=rowInd; i<rowInd+3;i++)
                {
                    for(int j=colInd; j<colInd+3;j++)
                    {
                        char c = board[i][j]; 
                        if(c=='.') continue ; 
                        if(seen.count(c)) return false; 
                        seen.insert(c);

                    }
                }
            }
        }
        return true; 
        
    }
};
