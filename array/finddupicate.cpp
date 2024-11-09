//find duplicate element in array
//given size?=5, then numbers 1-4 present atleast once in the array!, and one number is present twice
using namespace std;
#include <iostream>
int i;
int arr[100]; 

int duplicate(int arr[],int s){
    int ans=0;
    for(int i=0;i<s;i++){//now it cancels out itself
        ans=ans^arr[i];}
    for(i=1;i<s;i++){//now when we canel it with original(kinda?!?!)then the remaining is the duplicate
        ans=ans^i;
    }
    return ans;
    //size=5
    //elements, we know=1,2,3,4
    //[1,2,3,4,3]
    //ans^arr[i]-->ans= 0 ,[i=1]ans=1,[i=2]ans=3,[i=3]ans=6,[i=4]ans=10,[i=5]now 3 will cancel out 2
    //as a^a=0, hence ans=7
    //ans=ans^i-->[i=1]1 cancels the 1 so ans=6,[i=2]ans=4,[i=3]ans=1,[i=4]ans=3
    //idk I FORGOT WHAT CALCULATIONS I WAS GOING WITH TT TT
    //remains ans=0
    //now 
    

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
    cout<<"\nduplicate element in the array is: "<<duplicate(arr,k)<<endl;

    return 0;
}