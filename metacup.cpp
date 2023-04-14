#include <bits/stdc++.h>
using namespace std;

unsigned long long int N = 1e9+7;

unsigned long long solve(int n, int q, vector<vector<int>>& trees, vector<vector<int>>& wells){
    unsigned long long ans = 0;

    unsigned long long wellsqx = 0, treesqx=0, wellsumx=0, treesumx=0;
    unsigned long long wellsqy = 0, treesqy=0, wellsumy=0, treesumy=0;
    
    for(int i=0;i<n;i++){
        treesumx+= trees[i][0];
        treesqx+= trees[i][0]*trees[i][0];
    }
    for(int i=0;i<q;i++){
        wellsumx+= wells[i][0];
        wellsqx+= wells[i][0]*wells[i][0];
    }

    ans += ((q%N*treesqx%N)%N + (n%N*wellsqx%N)%N - (2 * ((treesumx%N) * (wellsumx%N)%N)%N) + N )%N;

    for(int i=0;i<n;i++){
        treesumy+= trees[i][1];
        treesqy+= trees[i][1]*trees[i][1];
    }
    for(int i=0;i<q;i++){
        wellsumy+= wells[i][1];
        wellsqy+= wells[i][1]*wells[i][1];
    }

    ans += ((q%N*treesqy%N)%N + (n%N*wellsqy%N)%N - (2 * ((treesumy%N) * (wellsumy%N)%N)%N) + N )%N;

    return ans;
}

int main(){
    vector<unsigned long long> res;
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;cin>>n;
        vector<vector<int>> trees(n);
        
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            trees[i]={x,y};
        }
        int q;cin>>q;
        vector<vector<int>> wells(q);
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            wells[i]={x,y};
        }

        unsigned long long ans = solve(n,q,trees, wells);
        res.push_back(ans);
        
    }
    for(int i=0;i<res.size();i++){
        cout<<"Case #"<<i+1<<": "<<res[i]<<endl;
    }
    return 0;
}