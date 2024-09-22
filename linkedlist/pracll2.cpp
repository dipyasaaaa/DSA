#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void pushHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        newNode->next=head;
        head=newNode;
    }


}

void pushTail(Node* &head, Node* &tail, int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

int getsize(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void display(Node* &head){
    Node* temp=head; 
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}  
void reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    while (curr!=NULL)
    {
        Node* nexNode= curr->next;
        curr->next=prev;
        prev=curr;
        curr=nexNode;
    }
    head=prev;
    display(head);
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    pushTail(head,tail,30);
    pushTail(head,tail,40);
    pushTail(head,tail,50);
    pushTail(head,tail,60);
    pushTail(head,tail,70);
    display(head);
    cout<<"the size of the linked list: "<<getsize(head)<<endl;
    reverse(head);
    reverse(head);

    return 0;
}




