class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> original = strs;
        for (int i = 0 ; i < strs.size(); i++){
            sort(strs[i].begin(), strs[i].end());
        }
        unordered_map<string, vector<int>> um;
        for (int i = 0 ; i < strs.size(); i++){
           um[strs[i]].push_back(i);
        }
        vector<vector<string>> s;
        for(auto& i : um){
            vector<string> k ;
            for(auto j : i.second){
                k.push_back(original[j]);
            }
            s.push_back(k);
        }
        return s;

    }

};