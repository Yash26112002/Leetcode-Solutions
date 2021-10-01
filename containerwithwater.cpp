#include <iostream>
#include <vector>
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
	int cap=0,l=0,r=v.size()-1;
	while(l<=r){
		int ar=min(v[l],v[r])*(r-l);
        if(ar>cap){
			cap=ar;
		}
		if(v[l]<v[r]){
			l++;
		}
		else{
			r--;
		}
		
	}
	cout<<cap;
}