class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int zero_count = 0 ;
        int total_without_zero=1;
        for(auto i : nums){
            if(i==0) {
                zero_count+=1;
            }
        }
        if(zero_count==1){
            for(auto i : nums){
            if(i!=0){
            total_without_zero = total_without_zero*i;
            }
        }
        } else if(zero_count ==0){
            for(auto i : nums){
           total = total * i;
        }
        }
        cout<<total;

        for(int i = 0; i< nums.size();i++){
            if(zero_count==1){
                if(nums[i]==0){
                    nums[i] = total_without_zero;
                } else {
                    nums[i] = 0;
                }
            }
            else if(zero_count >=2){
                nums[i] =0;
            } else {
            nums[i] = total/nums[i];

            }
        }
        return nums;
    }
};
