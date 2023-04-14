#include<iostream>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char>p;
	string t="";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==toupper(p.top())){
			p.pop();
		}
		else{
			p.push(s[i]);
		}
	}
	while(!p.empty()){
		t=p.top()+t;
		p.pop();
	}
	cout<<t;
	

}