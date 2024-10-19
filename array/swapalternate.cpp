//swap alternatively?!?!?
//input: 1 2 3 4 5 6
//output: 2 1 4 3 6 5jjjjjjjjjjj
#include <iostream>
using namespace std;

int arr[100];

void printArr(int arr[],int n){
    cout<<" Given Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlter(int arr[],int n){
    cout<<"\nArray after swapping every alternate element:"<<endl;
    for(int i=0;i<n;i+=2){
        //using the fuction
        //swap(arr[i],arr[i+1]);
        if(i+1<n){// if this condition isnt given then it will swap the element with the gabage wvalue which is ater the last element!
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elemnts in the array:"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" of the array:"<<" ";
        cin>>arr[i];
    }
    printArr(arr,n);
    swapAlter(arr,n);

}
