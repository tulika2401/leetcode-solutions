class Solution {
public:
    int hammingWeight(int n) {
        string ans="";

        while(n>0){
            ans+= (n%2)+'0';
            n= n/2;
            
        }
        reverse(ans.begin(),ans.end());
        int count=0;
        for(int i=0; i<ans.length();i++){
            if(ans[i]=='1'){
                count++;
            }
        }
        return count;
    }
};