#include<iostream>
using namespace std;

class Stack{
    
    int *arr;
    int top;
    int size;

public:
    Stack(){
        int s;
        cout<<"Enter the size of the array:";
        cin>>s;
        this->size=s;
        arr = new int[size];
        top=-1;
    }
    int getsize(){
        return (top+1);
    }
    void push(int d){
        if(top == size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = d;
        }
        }
    void pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            top--;
        }}
    void peek(){
        if(top == -1) {
            cout<<"Stack is empty"<<endl;
            return;
        }
        else{
        cout<<"the top element is:"<<arr[top]<<endl;

        }
    }
    void display(){
        int i=0;
        while (i<=top)
        {
           cout<<arr[i]<<" ";
           i++;
        }
        
        cout<<endl;
        
    }
}; 
int main()
{
    Stack st;
    st.push(30);
    st.push(20);
    st.push(10);
    st.display();
    st.push(40);
    st.display();
    st.push(50);
    st.peek();
    cout<<"byeeeeeeeee"<<endl;
    st.pop();
    st.peek();
    st.peek();






    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             