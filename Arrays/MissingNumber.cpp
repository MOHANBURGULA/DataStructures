class Solution {
public:
    int missingNum(vector<int>& arr) {

        int xor1 = 0;
        int xor2 = 0;

        int n = arr.size() + 1;

        // XOR from 1 to n
        for(int i = 1; i <= n; i++) {
            xor1 ^= i;
        }

        // XOR of array elements
        for(int i = 0; i < arr.size(); i++) {
            xor2 ^= arr[i];
        }

        return xor1 ^ xor2;
    }
};