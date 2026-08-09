class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &s:tokens){
            
            if(s=="+"||s=="-"||s=="*"||s=="/"){
                if(!st.empty()){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();


                if(s=="+"){int res=a+b;
                st.push(res);}

                else if(s=="-"){int res=a-b;
                st.push(res);}
                else if(s=="*"){
                    int res=b*a;
                    st.push(res);
                }else{
                    int res=a/b;
                    st.push(res);
                }
                }
            }
            else{
                st.push(stoi(s));
            }
            }
        
        return st.top();
        
    }
};

