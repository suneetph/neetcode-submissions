class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for (string str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            // cout << temp << endl;
            if (m.find(temp) == m.end()) {
                m[temp] = {str};
            } else
                m[temp].push_back(str);
        }
        for (auto itr : m) {
            ans.push_back(itr.second);
        }
        return ans;
    }
};
