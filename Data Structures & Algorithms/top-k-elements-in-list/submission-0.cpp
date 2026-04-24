class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int, int>> pq;
        for(int num : nums){
            m[num]++;
        }

        for(auto [val, freq] : m){
            // cout << val << " " << freq << endl;
            pq.push({freq, val});
        }

        vector<int> ans;
        int i = 0;
        while(i < k){
            int mostFreq = pq.top().second;
            pq.pop();
            ans.push_back(mostFreq);
            i++;
        }
        return ans;
    }
};
