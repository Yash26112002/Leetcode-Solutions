#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	int in;
	for(int i=0;i<n;i++){
		cin>>in;
		v.push_back(in);
	}
    vector<vector<int>>s;
	for(int i=0;i<v.size()-2;i++){
		for(int j=i+1;j<v.size()-1;j++){
			for(int k=j+1;k<v.size();k++){
                vector<int>t;
				if(v[i]+v[j]+v[k]==0){
                    t.push_back(v[i]);t.push_back(v[j]);t.push_back(v[k]);
                    int flg=1;
                    if(s.empty()){
                        s.push_back(t);
                    }
                    else{
                        for(auto i:s){
                            sort(i.begin(),i.end());
                            sort(t.begin(),t.end());
                            if(i==t){
                                flg=0;
                                break;
                            }
                        }
                        if(flg){
                            s.push_back(t);
                        }
                    }
				}
			}
		}
	}
    for(auto i:s){
        for(int j=0;j<i.size();j++){
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }
    
    
}