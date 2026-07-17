class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int actualsum= (n*(n+1))/2;
        int expectedsum=0;
        for(int i=0;i<n;i++){
            
            expectedsum+=nums[i];

        }
        return actualsum-expectedsum;
    }
};