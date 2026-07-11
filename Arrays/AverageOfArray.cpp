class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int n=arr.size();
        int  mean;
        for(int i=0;i<n;i++)
        {
            mean+=arr[i];
        }
        mean=mean/n;
        return mean;
    }
};