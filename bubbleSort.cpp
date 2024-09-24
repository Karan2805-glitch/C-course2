#include<iostream>
using namespace std;
void bubble(int* arr,int n)
{
    // base case
    if(n==0||n==1)
    return;
    // process
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
    // recursive relation 
    bubble(arr,n-1);

}
int main(){
    int arr[5]={3,5,2,14,6};
    int size=5;
    bubble(arr,size);
    cout<<"Sorted Array using bubble sort :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}
