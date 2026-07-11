class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
          string v=s;
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
            {
                if(v[i]!=s[i])
                {
                    return false;
                }

            }
            return true;
		}
};