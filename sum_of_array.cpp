#include<iostream>
using namespace std;
int sum(int arr[],int i,int size)
{
   // base case
   if(i==size)
    return 0;
   
//    recusive relation 
   int suma = arr[i] + sum(arr,i+1,size);
   return suma;
   }
int main(){
     int arr[5] = {2,4,9,9,9};
    int size = 5;

    int s = sum(arr,0,size);
    cout<<"Sum : "<<s;


return 0;
}
