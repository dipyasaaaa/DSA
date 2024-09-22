#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}
void insertattail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head =newNode;
        tail= newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertathead(head,tail,1);
    insertattail(head,tail,3);
    insertattail(head,tail,4);
    display(head);
    return 0;
}