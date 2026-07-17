class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int counter=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                {
                    counter++;
                }

            }
            if(counter>nums.size()/2)
            {
                return nums[i];
            }
        }
    }
};
