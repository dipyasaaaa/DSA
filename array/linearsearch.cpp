//linear search traaverses through all elemets and searches for elemets
#include<iostream>
using namespace std;
int arr[100];
int i=0;

// void search(int arr[],int n,int element){
//     int f=0;
//     for(i=0;i<n;i++){
//         if(arr[i]==element){
//             f=123;
//             cout<<"element found at "<<i+1<<"th position"<<endl;
//         }
//     }
//     if(f==0){
//         cout<<"element not present in array!"<<endl;
//     }
// }


//only returns the first time it encounters the element
bool search(int arr[],int n,int element){
    for(i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"element is present at:"<<i+1<<endl;
            return 1;

        }
    }
    return 0;
    

}


int main(){
    int k=0;
    int element=0;
    cout<<"enter the number of elements in the array: "<<" ";
    cin>>k;
    for(i=0;i<k;i++){
        cout<<"enter the "<<i+1<<"th element of the array:"<<" ";
        cin>>arr[i];
    }
    cout<<"enter element to be searched for:"<<" ";
    cin>>element;
    bool f=search(arr,k,element);
    if (f==1){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is not present!"<<endl;
    }
    return 0;
    
}