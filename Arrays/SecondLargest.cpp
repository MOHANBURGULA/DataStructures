class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=nums[nums.size()-1];
        int secondLargest=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]>secondLargest && nums[i]!= maxi)
        //     {
        //         secondLargest=nums[i];
        //         // break;
        //     }
        // }

        for(int i=n-2;i>=0;i--)
        {
            if(maxi!=nums[i])
            {
                secondLargest=nums[i];
                break;
            }
        }
        return secondLargest;
      
    }
};