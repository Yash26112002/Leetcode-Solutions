#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    vector<int>v={2,11,3,7,5,13,17};
    sort(v.begin(),v.end());
	queue<int>q;
    for(int i=0;i<v.size();i++){
        q.push(i);
    }
    int k=0;
    int flg=0;
    vector<int>ans;
    while(!q.empty()){
        if(flg==0){
            ans[q.front()]=v[k];
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        flg^=1;
    }

}