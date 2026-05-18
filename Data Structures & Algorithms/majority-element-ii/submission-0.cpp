class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int num : nums){
            m[num]++;
        }

        for(auto itr : m){
            if(itr.second > nums.size()/3){
                ans.push_back(itr.first);
            }
        }

        return ans;
    }
};