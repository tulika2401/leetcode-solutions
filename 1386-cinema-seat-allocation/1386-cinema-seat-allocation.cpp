class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, set<int>> rows;

for (int i = 0; i < reservedSeats.size(); i++) {
    int row = reservedSeats[i][0];
    int seat = reservedSeats[i][1];

    rows[row].insert(seat);
}
int ans=2*n;
for (auto x : rows) {
    int row = x.first;
    set<int> seats = x.second;
    
    bool left= true;
    bool middle= true;
    bool right= true;

    for(int i=2; i<=5;i++){
        if(seats.count(i)){
             left=false;
        }
    }
    for(int i=4;i<=7;i++){
        if(seats.count(i)){
            middle=false;
        }
    }
    for(int i=6;i<=9;i++){
        if(seats.count(i)){
            right=false;
        }
    }
    if(right && left){
    
    }else if(left||middle||right){
        ans--;
    }
    else{
        ans-=2;
    }
}
return ans;
    }
};