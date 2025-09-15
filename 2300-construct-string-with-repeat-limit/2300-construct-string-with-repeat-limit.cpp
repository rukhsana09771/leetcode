class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++) mp[s[i]]++;
        priority_queue<pair<char, int>> pq;
        for(auto x : mp) pq.push(x);
        string ans = "";
        while(!pq.empty()){
            auto larg = pq.top();
            pq.pop();
            int len = min(repeatLimit, larg.second);
            for(int i=0; i<len; i++) ans += larg.first;
            pair<char, int> secLarg;
            if(larg.second-len>0){
                if(!pq.empty()){
                    secLarg = pq.top();
                    pq.pop();
                    ans += secLarg.first;
                }else return ans;
                if(secLarg.second-1>0) pq.push({secLarg.first, secLarg.second-1});
                pq.push({larg.first, larg.second-len});

            }
        }
        return ans;
    }
};