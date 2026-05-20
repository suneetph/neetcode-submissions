class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }

        int ans = 0;
        for(int num : set){
            if(set.find(num - 1) == set.end()){
                int potans = 1;
                while(set.find(num + potans) != set.end()){
                    //cout<< num << ", " << potans << endl;
                    potans++;
                }
                ans = max(ans,potans);
            }
        }
        
        return ans;
    }
};