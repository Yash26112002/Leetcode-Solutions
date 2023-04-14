#include <bits/stdc++.h>
using namespace std;

bool helper(vector <int>& a, vector <int>& b, int n, int k){
    if(k==0) return (a==b);

    int j = 0;

    for(int i = 0;i < n;i++){
        if(a[i] == b[0]){
            j = i;
            break;
        }
    }

    int i = 0;
    while(i < n){
        if(a[j] != b[i]) return false;
        j++;
        i++;
        j%=n;
    }

    if(k == 1) return !(a == b);

    if(n == 2){
        if(a == b) return k%2 == 0;
        if(a != b) return !(k%2 == 0);
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    vector<string> ans;
    for(int c = 1;c <= t;c++){
        int n,k;
        cin>>n>>k;
        vector <int> a(n), b(n);
        for(int i = 0;i < n;i++) cin>>a[i];
        for(int i = 0;i < n;i++) cin>>b[i];

        if(helper(a,b,n,k)) ans.push_back("YES");
        else ans.push_back("NO");
    }

    for(int i=0;i<ans.size();i++){
        cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
    }
    return 0;
}
