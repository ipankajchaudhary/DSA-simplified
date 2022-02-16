    bool isIsomorphic(string s, string t) {
         unordered_map<char,int>sm;
        unordered_map<char,int>tm;
        
        for(int i=0; i<s.size(); i++){
            if(sm[s[i]] != tm[t[i]]) return false;
            sm[s[i]] = i+1;
            tm[t[i]] = i+1;
        }
        return true;
        
    }