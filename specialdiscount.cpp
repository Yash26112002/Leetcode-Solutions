class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> sta;
        int n=prices.size();
        vector<int> res(n);
        res[n-1]=prices[n-1];
        sta.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(sta.empty()==false and prices[sta.top()]>prices[i]){
                sta.pop();
            }
            if(sta.empty()==true){
                res[i]=prices[i];
            }else{
                res[i]=prices[i]-prices[sta.top()];
            }
            sta.push(i);
        }
        
        return res;
        
        
    }
};