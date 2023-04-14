#include<iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char>t;
		int dep=0;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='('){
				t.push('(');
			}
			else if(s[i]==')'){
				if(t.size()>dep){
					dep=t.size();
				}
				t.pop();
			}
		}
		cout<<dep;
}