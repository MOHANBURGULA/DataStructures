//1.  FIRST FIND THE LARGEST ELEMENT USING THE MAX FUNCTION
//2. AND COMPARE THE MAX ELEMENT WITH THE NEW VARIABLE NAMED SECOND LARGEST 
// 3. STORE THE VALUE IF IT IS GREATER THAN SECOND LARGEST BUT NOT THE LARGES BECAUSE WE NEED TO FIND SECOND LARGEST NOT LARGEST
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=*max_element(arr.begin(),arr.end());
        int secondlarge=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>secondlarge&&arr[i]!=maxi)
            {
               secondlarge=arr[i]; 
            }
        }
        return secondlarge;
    }
};

/*class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=nums[nums.size()-1];
        int secondLargest=-1;
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
*/
