#include<iostream>
using namespace std;
bool pallindrome(string& str,int i, int j)
{
    bool ans;
    if(i>j)
    return true;

    if(str[i]==str[j])
    {
        i++;
        j--;
        ans =pallindrome(str,i,j);
    }
    else
    {
        return false;
    }
    return ans;
}
int main(){
   string s="kamal";
   int len=s.length()-1;
  
   cout<<"Is the string pallindrome :"<< pallindrome(s,0,len); 
   return 0;
}