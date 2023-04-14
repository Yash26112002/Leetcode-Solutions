#include<iostream>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;
int main(){
	vector<string>v={"5","-2","4","C","D","9","+","+"};
	stack<int>s;
	int result=0;
	for(int i=0;i<=v.size()-1;i++){
		if(v[i]=="C"){
			result-=(s.top());
			s.pop();
		}
		else if(v[i]=="D"){
				result+=(2*s.top());
				s.push(2*s.top());
		}
		else if(v[i]=="+"){
            int f=s.top();
            s.pop();
            int g=f+s.top();
            result+=(g);
            s.push(f);
            s.push(g);

		}
		else{
			int d=stoi(v[i]);
			result+=d;
			s.push(d);
		}
	}
	cout<<result;
}