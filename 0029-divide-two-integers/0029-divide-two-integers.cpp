class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        long long dvd=llabs((long long)dividend);
        long long div=llabs((long long)divisor);
        long long ans=0;
        while(dvd>=div){
            int shift=0;
            while(dvd>=(div<<(shift+1))){
                shift++;
            }
            dvd-=(div<<shift);
            ans+=(1LL<<shift);
        }
        if((dividend<0)^(divisor<0)){
            ans= -ans;
        }
        return (int)ans;

             }
};