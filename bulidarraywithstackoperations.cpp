#include<iostream>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a={1,3};
	vector<string>v;
	int k=0;
	for(int i=1;i<=a[a.size()-1];i++){
		v.push_back("Push");
		if(i!=a[k]){
			v.push_back("Pop");
			k--;
		}
		k++;
	}
	for(auto i:v){
		cout<<i<<" ";
	}
}