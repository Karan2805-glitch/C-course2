#include<iostream>
using namespace std;
bool search(int arr[],int s,int k)
{
    // base case
    if(s==0)
    return false;

    // processing
    if(k==arr[0])
    return true;

    // recursive relation 
    bool ans = search(arr+1,s-1,k);
    return ans;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key;
    cout<<"Enter the key to be found in the array :"<< endl;
    cin>>key;
    
    // call the function 
    bool result = search(arr,size,key);

    // print the result 
    if(result)
    cout<<"Element found :-)";
    else
    cout<<"Element not found :-(";
return 0;
}
