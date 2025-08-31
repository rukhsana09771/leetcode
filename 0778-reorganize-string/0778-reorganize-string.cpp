class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto &p : mp) pq.push({p.second, p.first});
        int n = s.size();
        if(pq.top().first>(n+1)/2) return "";
        string st = "";
        pair<int,char> prev = {0, '#'};
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            st += curr.second;
            curr.first--;
            if(prev.first>0) pq.push(prev);
            prev = curr;
        }
        return st;
    }
};