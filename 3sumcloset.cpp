#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
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
	int target;
	cin>>target;
	int sum=INT_MAX,ans=0;
	for(int i=0;i<v.size()-2;i++){
		for(int j=i+1;j<v.size()-1;j++){
			for(int k=j+1;k<v.size();k++){
				if(abs(v[i]+v[j]+v[k]-target)<sum){
					sum=abs(v[i]+v[j]+v[k]-target);
					ans=v[i]+v[j]+v[k];
				}
			}
		}
	}
	cout<<ans;
}