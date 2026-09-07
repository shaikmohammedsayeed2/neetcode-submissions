class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int remaining;
        for(int i = 0 ; i < numbers.size() ; i++){
            remaining = target-numbers[i];
            auto it = find(numbers.begin(),numbers.end(),remaining);
            if(it!=numbers.end()){
                int index = distance(numbers.begin(), it);
                if(index!=i){
                    if(index>i) {
                        vector<int> final = {i+1, index+1};
                        return final ;
                    } else {
vector<int> final = {index+1,i+1};
                        return final ;
                    }
                    
                }

            }
        }


    }
};
