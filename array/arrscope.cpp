//understanding scopes in arrays ? and fuctions>?
#include <iostream>
using namespace std;

void update(int arr[], int n){// the arr[], give the adress of the actual array, so this doesnt create a clone? like vaariable
    cout<<"inside the fuction:"<<endl;
    arr[1]=100;//it will update in arrayglobally 
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"In the main fuction:"<<endl;

}

int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    for (int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    }