#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertathead(Node* &head, Node* &tail, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;

    }
    else{
    newNode->next=head;
    head=newNode;}
}
void insertattail(Node* &head, Node* &tail, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;

    }
    else{
    tail->next=newNode;
    newNode=tail;
    //display(head);
    }

}
void display(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        //cout<<temp<<"->";
        cout<<temp->data<<"->";

        temp=temp->next;}
        cout<<endl;
}

int getsize(Node* &head){
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        count+=1;
        temp=temp->next;
    }
    return count;
}
void insertatpos(Node* &head, Node* &tail, int data, int pos){
    int size= getsize(head);
    if(pos<0 || pos>size+2){
        cout<<"invalid"<<endl;
    }
    else{
        if(pos==1){
            insertathead(head,tail,data);
        }
        if(pos==size+1){
            insertattail(head,tail,data);
        }
        else{
            Node* newNode= new Node(data);
            Node* curr=head;
            Node* prev=NULL;
            while(pos>1){
                prev=curr;
                curr=curr->next;}
            prev->next=newNode;
            newNode->next=curr;}
            }
}

void deletehead(Node* &head, Node* &tail){
    Node* temp= head;
    head=head->next;
    delete temp;
}

void deletetail(Node* &head, Node* & tail){
    Node* temp= head;
    Node* prev=NULL;
    while(temp!=NULL){
        prev=temp;
        temp=temp->next;
    }
    tail=prev;
    delete temp;}

void deletepos(Node* &head, Node* &tail,int pos){
    Node* temp= head;
    Node* prev= NULL;
    int s=getsize(head);
    if(pos==1){
        deletehead(head,tail);
    }
    else if(pos==s){
        deletetail(head,tail);
    }
    else{
        while(pos>1){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
    }

    
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    char c='Y';

    while(c == 'Y'|| c=='y'){
        int ch=0;
        int data=0;
        int pos=0;
        cout<<"Linked list insertion menu:"<<endl;
        cout<<"1.insert at head"<<endl;
        cout<<"2.insert at tail"<<endl;
        cout<<"3.insert at pos"<<endl;
        cout<<"4.delete head"<<endl;
        cout<<"5.delete tail"<<endl;
        cout<<"6.delete at pos"<<endl;
        cout<<"7.display"<<endl;
        cout<<"8.exit"<<endl;
        cin>>ch;
        if(ch==8){
            break;
        }

        switch (ch)
        {
        case 1:
            cout<<"enter data to be entered:";
            cin>>data;
            insertathead(head,tail,data);
            break;
        case 2:
            cout<<"enter data to be entered:";
            cin>>data;
            insertattail(head,tail,data);
            break;
        case 3:
            cout<<"enter data to be entered:";
            cin>>data;
            cout<<"enter position to be entered:";
            cin>>pos;
            insertatpos(head,tail,data,pos);
            break;
        case 4:
            deletehead(head,tail);
            cout<<"head deleted";
            break;
        case 5:
            deletetail(head,tail);
            cout<<"tail deleted";
            break;
        case 6:
            cout<<"enter position to be deleted:";
            cin>>pos;
            deletepos(head,tail,pos);
             cout<<"element deleted";
            break;


        case 7:
            display(head);
            break;

        default:
            cout<<"invalid option";
            break;
        }
        cout<<"press 'Y' or 'y' to continue, else press any other key:";
        cin>>c;






    }
}
