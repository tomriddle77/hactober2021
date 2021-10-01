class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        for (int i=1; i<strs.size(); i++){
            for(int j=0; j<common.size(); j++){
                if (strs[i][j] != common[j]){
                    common.resize(j);
                }
                if (common == "") return common;
            }
        }
        return common;
    }
};
