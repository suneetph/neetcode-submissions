class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        vector<int> pre(nums.size());
        vector<int> post(nums.size());

        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                pre[i] = nums[i];
            }
            else{
                pre[i] = pre[i - 1] * nums[i];
            }
        }
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(i == nums.size() - 1){
                post[i] = nums[i];
            }
            else{
                post[i] = post[i + 1] * nums[i];
            }
        }  
        
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                ans[i] = post[i + 1];
            }
            else if(i == nums.size() - 1){
                ans[i] = pre[i - 1];
            }
            else{
                ans[i] = pre[i - 1] * post[i + 1];
            }
        }

        return ans;
    }
};