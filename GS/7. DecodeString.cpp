string decodeString(string s) {
        
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }else{
                string curr = "";
                while(st.top() != '['){
                    curr = st.top() + curr;
                    st.pop();
                }
                st.pop();
                
                string no = "";
                while(!st.empty() and isdigit(st.top())){
                    no = st.top() + no;
                    st.pop();
                }
                
                int k = stoi(no);
                
                while(k--){
                    for(int i=0; i<curr.size(); i++)
                        st.push(curr[i]);
                }
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
}