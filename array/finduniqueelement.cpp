//find unique element in array?!?!?
#include <iostream>
using namespace std;
int arr[100];
int i;
int findUnique(int *arr, int size)
{
    //given n=2m+1, hence we know n is odd?!?
    //also given ki m numbers appear twice and only one number appears once
    //lets say m=3... 3432482... 3 numbers repeated twice, only one number "8" didnt repeat
    // gotta find that one number..how?!?!
    //XOR!!!!
    //a^a=0
    //0^a=a
    int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i];
    }
    return ans;
 
}

int main(){
    int k;
    cout<<"enter the number of elemnts in the array: "<<" ";
    cin>>k;//number of elments in array 
    for(i=0;i<k;i++){
        cout<<" enter element "<<i+1<<" of array: "<<" ";//input
        cin>>arr[i];
    }
    cout<<"Given array:"<<" ";
    for(i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nUnique element in the array is: "<<findUnique(arr,k)<<endl;

    return 0;
}