class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   for( int i =0 ; i<nums.size() ; i ++){
    int a = nums[i];
    int b = target - a;
    for (int j = 0 ; j<nums.size();j++){
        cout << a , b;
        if(i!=j){
            if(b==nums[j]){
            return vector<int> {i,j};
            }
        }
    }
   }
   return {};
    }
};
