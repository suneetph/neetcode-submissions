class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int sum = 0;
    int n = nums.size();
    int count = 0;
    map<int , int> map;
    map[0] = 1;
        
    for(int val : nums){
        sum += val;
        if(map.find(sum - k) != map.end()){
            count += map[sum - k];
        }
        map[sum]++;
    }
        
    return count;
    }
};