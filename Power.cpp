#include<iostream>
using namespace std;
int power(int a,int b)
{
    // base case
    if(b==0)
    return 1;

    // recursive relation
    // if power is even
    if(b%2==0)
    return power(a,b/2)*power(a,b/2);
    // if power is odd
    else
    return a*power(a,b/2)*power(a,b/2);
}
int main(){
    int n1,n2;
    cout<<"Enter the number :";
    cin>>n1;
    cout<<"Enter the power :";
    cin>>n2;
    int exp=power(n1,n2);
    cout<<n1<<"^"<<n2<<"="<<exp;

return 0;
}
