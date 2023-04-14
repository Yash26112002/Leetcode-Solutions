//if last element is highest then span will be indexof last element+1
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	int a={100,80,60,70,60,75,85};
	int n=sizeof(a)/sizeof(int);
	stack<int>s;
	s.push(a[0]);
	vector<int>v;
	v.push_back(1);
	int l=0;
	for(int i=1;i<n;i++){
		l++;
		if(a[i]<=s.top()){
			v.push_back(l-s.size());
			s.push(a[i]);
		}
		else{
			while(!s.empty()){
				s.pop();
				if(a[i]<=s.top()){
					v.push_back(l-s.size());
					s.push(a[i]);
					break;
				}
			}
		}
		
	}
}