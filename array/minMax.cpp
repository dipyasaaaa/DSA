#include<iostream>
using namespace std;

int arr[40];//initialising array arr
int i=0;
void max(int a[],int q){
    int mx=0;
    for(i=0;i<q;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<"max in array is:"<<mx<<endl;

}
void min(int b[], int q){
    int mn=10000000;//INT_MAX? not working idk?
    for(i=0;i<q;i++){
        if(b[i]<mn){
            mn=b[i];
        }
    }
    cout<<"min in array is:"<<mn<<endl;


}

int main(){
    int ch=0;
    int n=0;
    char c='Y';
    cout<<"enter the number of elements in the array:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the element "<<i<<":"<<" ";
        cin>>arr[i];
    }
    while(c=='Y'||c=='y'){
        cout<<"MinMax menu:"<<endl;
        cout<<"1.MINIMUM\n2.MAXIMUM\n3.EXIT"<<endl;
        cout<<"choose your option:";
        cin>>ch;
        switch(ch){
            case 1:
                min(arr,n);
                break;
            case 2:
                max(arr,n);
                break;
            case 3:
                exit;
                break;
            default:
                cout<<"Please enter a valid option:";
                cin>>ch;
                break;
        }

        cout<<"\nPress 'Y' or 'y' to continue, press any other key to stop:";
        cin>>c;
    }    

}