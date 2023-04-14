#include<iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char>t;
	string p="";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='('){
			if(!t.empty()){
				p=p+'(';
			}
			t.push('(');
			
		}
		else{
			t.pop();
			if(!t.empty()){
				p=p+')';
			}
		}
	}
	cout<<s;
}