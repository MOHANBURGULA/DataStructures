class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int counter=0;
        int n=arr.size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                counter+=1;
            }
            else if(arr[i]==0)
            {
                counter=0;
            }
            maxi =max(counter,maxi);
        }
        return maxi;

    }
};