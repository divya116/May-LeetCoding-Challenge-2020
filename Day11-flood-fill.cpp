class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        /*
        //BFS approach
        int old=image[sr][sc];
        if (newColor==old) //giving TLE without this
            return image;
        
        queue<pair<int, int>> q;
        q.emplace(make_pair(sr, sc)); //construct here only
        //push - make pair first above then push that eg, q.push(p)

        int rows=image.size();
        int cols=image[0].size();
        int i,j;
        
        while(!q.empty())
        {
            pair<int, int> cur = q.front();
            q.pop();
            i=cur.first, j=cur.second;
            image[i][j]=newColor;
            //up
            if (i-1>=0 && image[i-1][j]==old)
                q.emplace(make_pair(i-1, j));
            //down
            if (i+1<rows && image[i+1][j]==old)
                q.emplace(make_pair(i+1, j));
            //left
            if (j-1>=0 && image[i][j-1]==old)
                q.emplace(make_pair(i, j-1));
            //right
            if (j+1<cols && image[i][j+1]==old)
                q.emplace(make_pair(i, j+1));
        }
        return image;*/
        
        //DFS Approach
        int old=image[sr][sc];
        if (newColor!=old)
            dfs(image, sr, sc, newColor, old);
        return image;
        
    }
    
    void dfs(vector<vector<int> > & image, int r, int c, int newColor, int old)
    {
        if (image[r][c]==old)
        {
            image[r][c]=newColor;
            if (r-1>=0)
                dfs(image, r-1, c, newColor, old);
            if (c-1>=0)
                dfs(image, r, c-1, newColor, old);
            if (r+1<image.size())
                dfs(image, r+1, c, newColor, old);
            if (c+1<image[0].size())
                dfs(image, r, c+1, newColor, old);
        }
    }
};
