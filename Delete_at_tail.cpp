#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void printing_linked_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}

void Delet_any_position(Node* head,int pos){
    Node* deletNode;
    Node* temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    deletNode=temp->next;
    temp->next=temp->next->next;
    delete deletNode;

}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);

    head->next=a;
    a->next=b;

    Delet_any_position(head,2);
    printing_linked_list(head);

}