

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void Delete_at_tail(Node* &head,Node* &tail){
    Node* deletNode=tail;
    tail=tail->prev;
    delete tail;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void forward_print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=tail;
    tail->prev=b;

    Delete_at_tail(head,tail);

    forward_print(head);
}