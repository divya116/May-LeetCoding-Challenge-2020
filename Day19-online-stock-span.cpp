class StockSpanner 
{
public:
    
    stack<pair<int, int> > s;//price, span
    int next(int price)
    {
        int span=1;
        while(!s.empty() && price>=s.top().first)
        {
            span+=s.top().second;
            s.pop();
        }
        s.push(make_pair(price, span));
        return span;
    }
    
    /* solution from discussion
    
    unordered_map<int, int> map;
    stack<int> s;
    int next(int price)
    {
        if (s.empty())
        {
            s.push(price);
            map[price]=1;
            return map[price];
        }
        
        int span=0;
        while(!s.empty() && price>=s.top())
        {
            span+=map[s.top()];
            s.pop();
        }
        s.push(price);
        map[price]=span+1;//add 1 for cur
        return map[price];
    }*/
};
