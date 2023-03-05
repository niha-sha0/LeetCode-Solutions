class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int len1 = a.size();
        int len2 = b.size(); 
        int i = len1 - 1, j = len2 - 1;
        int ds = 0;
        while(i >= 0 || j >= 0 || ds == 1)
        {
            ds = ds + ((i >= 0) ? a[i] - '0' : 0);
            ds = ds + ((j >= 0) ? b[j] - '0' : 0);
            ans = char(ds % 2 + '0') + ans;
            ds = ds/2;
            i--;
            j--;
        }
        return ans;
    }
};
