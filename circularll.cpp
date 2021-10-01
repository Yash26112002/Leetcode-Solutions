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
int main(){
    int p;
    cin>>p;
    while(p!=-1){
        insertattail(p,head,tail);
        cin>>p;
    }
    
    node*temp=head;
    node*n=new node(34);
    n->next=head;
    if(temp!=NULL){
        tail->next=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
    }
    else{
        n->next=n;
    }
    head=n;
    while(n->next!=head){
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<n->data;
}