class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordlist) {
        unordered_set<string> s;
        bool ispresent = false;
        for(auto e:wordlist){
            if(e == endword){
                ispresent = true;
            }
            s.insert(e);
        }
        if(ispresent == false){
            return 0;
        }
        queue<string> q;
        q.push(beginword);
        int ans = 0;
        while(!q.empty()){
            ans += 1;
            int x = q.size();
            for(int i = 0;i<x;i++){
                string curr = q.front();
                q.pop();
                for(int i = 0;i<curr.length();i++){
                    string temp = curr;
                    for(char a='a';a<='z';a++){
                        temp[i] = a;
                        if(curr == temp){
                            continue;
                        }
                        if(temp == endword){
                            return ans+1;
                        }
                        if(s.find(temp)!=s.end()){
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};