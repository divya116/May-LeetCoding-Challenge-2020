class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) 
    {
        if(c.size()<3)
            return true;
        int dy=c[1][1]-c[0][1], dx=c[1][0]-c[0][0];
        for(int i=2;i<c.size();i++){
            int ddy=c[i][1]-c[i-1][1], ddx=c[i][0]-c[i-1][0];
            if(ddy*dx != ddx*dy)
                return false;
        }
        return true;
    }
};
