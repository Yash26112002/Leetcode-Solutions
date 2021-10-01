#include <iostream>
using namespace std;
int main(){
	char a[11][11]={
				 {'.','.','.','.','6','.','.','1','.'}
				,{'.','4','.','1','.','5','.','.','.'}
				,{'.','.','.','.','.','3','.','.','1'}
				,{'8','.','.','.','.','.','.','2','.'}
				,{'.','.','2','.','7','.','.','.','.'}
				,{'.','1','5','.','.','.','.','.','.'}
				,{'.','.','.','.','.','2','.','.','.'}
				,{'.','2','.','9','.','.','.','.','.'}
				,{'.','.','4','.','.','.','.','.','.'}
			};
	int flg=1;
	for(int i=0;i<9;i++){
		for(int j=0;j<8;j++){
			for(int k=j+1;k<9;k++){
				if(a[i][j]=='.'||a[i][k]=='.'){
					continue;
				}
				else if(a[i][j]!=a[i][k]){
					flg=1;
				}
				else{
					flg=0;
					break;
				}
			}
			if(flg==0){
				break;
			}
		}
		if(flg==0){
				break;
		}
	}
	if(flg){
		for(int i=0;i<9;i++){
			for(int j=0;j<8;j++){
				for(int k=j+1;k<9;k++){
					if(a[j][i]=='.'||a[k][i]=='.'){
						continue;
					}
					else if(a[j][i]!=a[k][i]){
						flg=1;
					}
					else{
						flg=0;
						break;
					}
				}
				if(flg==0){
					break;
				}
			}
			if(flg==0){
				break;
			}
		}
		if(flg){
			for(int i=0;i<9;i+=3){
				for(int j=0;j<9;j+=3){
					int r=i-i%3; int c=j-j%3,d;
						for(int p=r;p<r+3;p++){
                            for(int q=c;q<c+3;q++){
                                for(int e=p;e<r+3;e++){
                                    if(e==p){
                                        d=q+1;
                                    }
                                    else{
                                         d=c;
                                    }
                                    while(d<c+3){
                                        if(a[p][q]=='.'){
                                            cout<<r<<" "<<c<<" ";
                                            cout<<"*"<<<<endl;
                                            break;
                                        }
                                        else if(a[p][q]!=a[e][d]){
                                            flg=1;
                                        }
                                        else{
                                            cout<<"invalid";
                                            return 0;
                                        }
                                        d++;
                                    } 
                                }            
                            }
                        }
				}
			}
			cout<<"valid";
		}
		else{
			cout<<"invalid";
		}
	}
	else{
		cout<<"invalid";
	}

}