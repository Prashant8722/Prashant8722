class Solution {
public:
    bool isValid(string s) {
        map<char , char>mp;
        mp.insert({')','('});
        mp.insert({'}','{'});
        mp.insert({']','['});
        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp.find(s[i]) != mp.end()){
                char above = st.empty() ? 'X' : st.top();
                if(above != mp[s[i]])
                    return false;
             st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};