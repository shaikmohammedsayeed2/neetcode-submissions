class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> o;
        for(auto i : nums){
            o[i]++;
        }
        priority_queue <pair<int,int>> p ; 
        for(auto & i: o){
            p.push({i.second,i.first});
        }
        vector <int> s;
        
        for(int i =0;i<k;i++){
            s.push_back((p.top()).second);
            p.pop();
        }
        return s;
    }
};
