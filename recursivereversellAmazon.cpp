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
void recursell(node*p,node*q){
    if(p!=NULL){
        recursell(p->next,p);
        p->next=q;
    }
    else{
        head=q;
    }

}
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        insertattail(n,head,tail);
        cin>>n;
    }
    recursell(head,NULL);
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

}