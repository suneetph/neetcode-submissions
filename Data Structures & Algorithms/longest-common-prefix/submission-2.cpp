class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs.size() - 1; i++){
            string str1 = strs[i];
            string str2 = strs[i + 1];
            string potans = "";

            if(str1 == "" || str2 == "") return "";
            
            if(str1.size() < str2.size()){
                swap(str1, str2);
            }

            for(int j = 0; j < str1.size(); j++){
                if(str1[j] == str2[j]){
                    potans += str1[j];
                }
                else break;
            }

            if(ans == "" or potans.size() < ans.size()){
                ans = potans;
            }
        }

        return strs.size() == 1 ? strs[0] : ans;
    }
};