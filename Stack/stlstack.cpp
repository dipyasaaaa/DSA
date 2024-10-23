#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;//creation 

    //push operation
    s.push(2);//2
    s.push(3);//3,2
    s.push(5);//5,3,2

    //peek
    cout<<"Peeking at top element: "<<s.top()<<endl;

    //pop
    s.pop();//3,2
    cout<<"Peeking at top element after poping: "<<s.top()<<endl;

    //empty?!?!
    if(s.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }

    //size
    cout<<"size of stack is:"<<s.size()<<endl;

    //printing stack?!?!?
   //Cant print using stl, as it doesnt allow to give index to the elements
   //instead we gotts cout the top element then pop each of the element in a while loop

   //swap?!?!
   s.push(4);//4,3,2
   stack<int> s1;
   s1.push(20);//20
   s1.push(30);//30,20
   s1.push(40);//40,30,20

   cout<<"Before swapping: "<<endl;
   cout<<"S ka top: "<<s.top()<<endl;
   cout<<"S1 ka top: "<<s1.top()<<endl;


   s1.swap(s);

   cout<<"After swapping: "<<endl;
   cout<<"S ka top: "<<s.top()<<endl;
   cout<<"S1 ka top: "<<s1.top()<<endl;





    

    return 0;
}