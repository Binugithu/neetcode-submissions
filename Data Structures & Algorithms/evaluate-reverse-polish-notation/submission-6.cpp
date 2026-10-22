class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st ; 
        for(int i =0; i<tokens.size(); i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
            {
                st.push(stoi(tokens[i])); 
            }
            else 
            {
                int secondele=st.top(); 
                st.pop(); 
                int firstele= st.top(); 
                st.pop(); 
                int res=0 ; 
                if(tokens[i]=="+")
                {
                    res= firstele + secondele; 
                }
                else if(tokens[i]=="-")
                {
                   res= firstele - secondele; 

                }
                else if(tokens[i]=="*")
                {
                    res= firstele * secondele; 
                }
                else if(tokens[i]=="/")
                {
                   if (firstele == 0) {
                    // Dividing by zero — inspect the input and stack
                   } else {
                    res = firstele /secondele ; 
                   }

                }  
                st.push(res); 
                
            }
        }
        return st.top(); 
    }
};
