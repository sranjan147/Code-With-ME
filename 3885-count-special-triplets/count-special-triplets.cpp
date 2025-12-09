class Solution {
public:
    int M = 1e9 + 7;

    int specialTriplets(vector<int>& nums) {
        unordered_map<int, int> mpLeft;
        unordered_map<int, int> mpRight;

        for(int &num : nums) {
            mpRight[num]++;
        }

        int ans = 0;

        for(int &num : nums) {
            mpRight[num]--; 

            int left = mpLeft[2*num];
            int right = mpRight[2*num];

            ans = (ans + (1LL * left * right)) % M;

            mpLeft[num]++; 
        }

        return ans;
    }
};