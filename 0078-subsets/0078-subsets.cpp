class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& nums, int index, vector<int>&subsets){
        
        if(index==nums.size()){
            ans.push_back(subsets);
            return;
        }
        subsets.push_back(nums[index]);
        backtrack(nums,index+1,subsets);

        subsets.pop_back();
        backtrack(nums,index+1,subsets);}
            vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        backtrack(nums, 0, subset);
        return ans;




    }
};