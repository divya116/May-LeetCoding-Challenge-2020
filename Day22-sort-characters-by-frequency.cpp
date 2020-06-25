class Solution {
public:
    string frequencySort(string s) 
    {
        //simple freq map
        unordered_map<char, int> m;
        for (auto c:s)
            m[c]++;
        
        vector<string> v(s.size()+1, ""); //+1 for 0 frquency - max freq is s.size
        
        for (auto p:m) //every pair in map
        {
            char c=p.first;
            int freq=p.second;
            v[freq].append(freq, c); //add freq instances of char c to this string
            cout<<v[freq]<<endl; //ee t r
        }
        
        string res;
        //v.size()-1 = s.size()
        //add to res in reverse order of freq and return res string
        for (int i=v.size()-1; i>0; i--) //excpet 0 freq characters
        {
            res.append(v[i]);
        }
        
        return res;
    }
};
