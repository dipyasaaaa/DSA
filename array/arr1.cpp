#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int num[15]; //declare
    cout<<"value at index 5:"<<num[4]; //accesing through index
    cout<<"\nvalue at index 2:"<<num[2]<<endl;
    printArray(num,15); //printing array num
    cout<<"\npritning num array"<<endl; 
    for (int i=0;i<15;i++){
        cout<<num[i]<<" ";//garbage values
    }

    int arr[5]={5,7,11}; //initialisig array
    cout<<endl<<"printing arr using function:";
    printArray(arr,5);//printing array arr
    cout<<"\npritning arr array"<<endl;
    for (int i=0;i<5;i++){//5,7,11,0,0
        cout<<arr[i]<<" ";
    }


    int ar[7]= {0}; //initialising with 0
    cout<<endl<<"printing ar array using function:";
    printArray(ar,7); //printing array arr
    cout<<"\npritning ar array"<<endl;
    for (int i=0;i<7;i++){//all 0's
        cout<<ar[i]<<" ";
    }

    //intialisig with 1
    int a[5];
    for(int i=0;i<5;i++){
        a[i]=1;
    }
    cout<<endl<<"printing a array:"<<endl;
    printArray(a,5);//all 1's 


}