// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        unordered_set<char> st;
        for(int i=0;i<str2.size();i++)
        {
            st.insert(str2[i]);
            
        }
        string ans="";
        for(int i=0;i<str1.size();i++)
        {
            if(st.find(str1[i])==st.end())
            {
                ans+=str1[i];
            }
        }
        return ans;
    }
};
