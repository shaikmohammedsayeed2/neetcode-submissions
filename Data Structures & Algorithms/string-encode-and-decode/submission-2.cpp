class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto i : strs){
            s += to_string(i.size()) + "#" + i;
        }
        return s;
    }



    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int delim = s.find('#', i);
            int len = stoi(s.substr(i, delim - i));
            res.push_back(s.substr(delim + 1, len));
            i = delim + 1 + len;
        }
        return res;
    }

};
