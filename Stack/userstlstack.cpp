#include <iostream>
using namespace std;
#include <stack>

int main(){
    int choice=0;
    char ch='Y';
    int element;
    stack<int> s;
    int n;
    stack<int> s2;
    while(ch=='Y'||ch=='y'){
        cout<<"Stack Menu: "<<endl;
        cout<<"----------- "<<endl;
        cout<<"1.push(insert)\n2.pop(delete)\n3.peek(top element)\n4.size of stack\n5.swap two stacks\n6.exit\n";
        cout<<"Please choose your option: "<<" ";
        cin>>choice;

        switch(choice){
            case 1:
              cout<<"Pushing element in stack!"<<endl;
              cout<<"enter element to be pushed: "<<" ";
              cin>> element;
              s.push(element);
              cout<<"Element pushed in stack!"<<endl;
              break;

            case 2:
              cout<<"Poping element from stack!"<<endl;
              cout<<"Top element of stack before poping: "<<s.top()<<endl;
              s.pop();
              cout<<"Element poped!"<<endl;
              cout<<"Top element of stack after poping: "<<s.top()<<endl;
              break;

            case 3:
              cout<<"top element of stack is: "<<s.top()<<endl;
              break;

            case 4:
               cout<<"Size of stack is: "<<s.size()<<endl;

            case 5:
               cout<<"enter the number of elements in second stack: "<<" ";
               cin>>n;
               for(int i=0;i<n;i++){
                cout<<"enter element to be pushed in second stack: "<<" ";
                cin>>element;
                s.push(element);
               }
               cout<<"Before swapping: "<<endl;
               cout<<"top element of first stack: "<<s.top()<<endl;
               cout<<"top element of second stack: "<<s2.top()<<endl;


               s2.swap(s);
               cout<<"Stacks have been swapped!!";

               cout<<"After swapping: "<<endl;
               cout<<"top element of first stack: "<<s.top()<<endl;
               cout<<"top element of second stack: "<<s2.top()<<endl;
               break;


            case 6:
               break;

            default:
               cout<<"Please enter a valid choice!";}
        cout<<"Enter 'Y' or 'y' to continue, press any other key to exit:";
        cin>>ch;
    }
}