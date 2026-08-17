class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;

        sort(nums.begin(), nums.end());

        int ansort = 0;

        for(int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i-1];

            ansort = max(ansort, diff);
        }

        return ansort;
    }
};