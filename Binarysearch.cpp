#include<iostream>
using namespace std;
bool Bsearch(int arr[],int s,int e,int k)
{
    if(s>e)
    return false;

    int mid = (e+s)/2;

    if(k==arr[mid])
    return true;

    
    if(k<arr[mid])
    return Bsearch(arr,s,mid-1,k);

    if(k>arr[mid])
    return Bsearch(arr,mid+1,e,k);


}
int main(){
  int arr[6]={2,4,6,10,14,16};
  int size=6;
  int key;
    cout<<"Enter the key to be found in the array :"<< endl;
    cin>>key;
    
    // call the function 
    bool result = Bsearch(arr,0,size-1,key);

    // print the result 
    if(result)
    cout<<"Element found :-)";
    else
    cout<<"Element not found :-(";

return 0;
}
