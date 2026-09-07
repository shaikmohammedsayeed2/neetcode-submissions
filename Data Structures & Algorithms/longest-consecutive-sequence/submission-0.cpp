class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int current_max = 1 ; 
        int longest_max = 1 ;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1] + 1) {
                current_max ++;
                longest_max = max(longest_max,current_max);
            }
            else{
                current_max = 1 ;
            }
        }
        return longest_max;
    }
};
