class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size())
        {
            return -1;
        }
        if(haystack == needle)
        {
            return 0;
        }
        for(int i=0; i<=haystack.length()-needle.size(); i++)
        {
            if(haystack.substr(i, needle.size()) == needle)
                return i;
        }
        return -1;
    }
};
