class Solution {
public:
    vector<vector<int>> g;
    vector<int> color;
    
    bool colorNode(int u, int c) {
        if (color[u] == c)
            return true;
        if (color[u] != -1)
            return false;
        color[u] = c;
        
        for (auto v : g[u]) {
            if (colorNode(v, c == 0 ? 1 : 0) == false)
                return false;
        }
        return true;
    } 
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        g = vector<vector<int>>(N+1);
        color = vector<int>(N+1, -1);
        
        for(auto e : dislikes) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        
        for (int v = 1; v < N+1; ++v) {
            if (color[v] == -1 && !colorNode(v, 0))
                return false;
        }
        return true;
    }

};
