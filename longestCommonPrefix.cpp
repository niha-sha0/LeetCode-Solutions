Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
  
Solution : 

string longestCommonPrefix(vector<string>& strs) {
        int i = 0, smallest_len = strs[0].size();
        for(auto str: strs){
            if(str.size()<smallest_len) smallest_len = str.size();
        }
        string common_str = "";
        for(int i=0; i<smallest_len; i++){
            bool common = true;
            char c = strs[0][i];
            for(auto word:strs){
                if(word[i]!=c){
                    common = false;
                    break;
                }
            }
            if(common) common_str.append(1, c);
            else break;
        }
        return common_str;
    }
