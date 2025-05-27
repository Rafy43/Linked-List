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
void Delete_at_anyPosition(Node* &head,int pos){
    Node* temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    Node* deletNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deletNode;
    
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

    Delete_at_anyPosition(head,2);

    forward_print(head);
}