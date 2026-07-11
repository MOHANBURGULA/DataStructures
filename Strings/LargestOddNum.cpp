class Solution {
public:
    string largeOddNum(string& s) {

        int j = -1;
        int n = s.size();

        // Find last odd digit
        for(int i = n - 1; i >= 0; i--)
        {
            if((s[i] - '0') % 2 == 1)
            {
                j = i;
                break;
            }
        }

        // No odd digit found
        if(j == -1)
        {
            return "";
        }

        // Skip leading zeros
        int i = 0;

        while(i < n)
        {
            if(s[i] != '0')
            {
                break;
            }
            i++;
        }

        return s.substr(i, j - i + 1);
    }
};