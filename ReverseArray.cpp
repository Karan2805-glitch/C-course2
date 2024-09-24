#include<iostream>
using namespace std;

void reverse(string& arr,int i,int j)
{
    if(i>j)
    return ;

    swap(arr[i],arr[j]);
    i++;
    j--;
    reverse(arr,i,j);
}
int main(){
   string s="abcde";
   int len=s.length()-1;
   reverse(s,0,len);
   cout<<"Reverse String :"<<s; 
return 0;
}
