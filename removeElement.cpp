#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int val;
	cin>>val;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(v[i]==val){
			v[i]=INT_MAX;
			cnt++;
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-cnt;i++){
		cout<<v[i]<<" ";
	}

}