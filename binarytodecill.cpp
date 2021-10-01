#include <iostream>
#include <cmath>
using namespace std;
class node{
public:
    int data;
    node*next;
    //constructor
    node(int d){
        data=d;
        next=NULL;
    }
};
node*head=NULL;
node*tail=NULL;
void insertattail(int data,node*&head,node*&tail){
    node*n=new node(data);
    if(head==NULL){
        head=n;
        tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}
int length(node*head){
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);
}
int decimal(node*head,int l,int sum){
    if(head==NULL){
        return 0;
    }
    else{
        sum+=(head->data)*pow(2,l);
        decimal(head->next,l-1,sum);
    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        insertattail(n,head,tail);
        cin>>n;
    }
    int sum=0;
    cout<<decimal(head,length(head)-1,sum);
}