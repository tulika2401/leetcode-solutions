class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx= INT_MIN;
        int minn= INT_MAX;
        unordered_set<int> s;
        for(int x:nums){
            maxx=max(x,maxx);
            minn= min(x,minn);
            s.insert(x);
        }

        vector<int>ans;
        for(int x= minn+1; x<maxx; x++){
            if(!s.count(x)){
                ans.push_back(x);
            }
        }
    return ans;
    }
};