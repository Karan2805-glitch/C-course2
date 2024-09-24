
#include <iostream>
using namespace std;
int firstOcc(int arr[], int s,int e, int key) {
    int ans;

    if(s>e)
    return -1;

    int mid = (e+s)/2;

    if(key==arr[mid])
    {
        ans = mid;
        e=mid-1;
    }

    
    if(key<arr[mid])
    ans= firstOcc(arr,s,mid-1,key);

    if(key>arr[mid])
    ans= firstOcc(arr,mid+1,e,key);

    return ans;
}

int lastOcc(int arr[], int s,int e, int key) {
    
    int ans;

    if(s>e)
    return 0;

    int mid = (e+s)/2;

    if(key==arr[mid])
    {
        s=mid+1;
        ans=lastOcc(arr,s,e,key);
        return ans;
    }

    
    if(key<arr[mid])
    ans= lastOcc(arr,s,mid-1,key);

    if(key>arr[mid])
    ans= lastOcc(arr,mid+1,e,key);

    return ans;
    
}

int main(){
    int arr[9]={1,2,2,2,3,4,4,6,6};
    int size=9;
    int k=2;
    int first=firstOcc(arr,0,size-1,k);
    int last=lastOcc(arr,0,size-1,k);
    cout<<"First Occurence of key "<< k << " is "<<first<<endl;
    cout<<"Last Occurence of key "<< k << " is "<<last<<endl;

return 0;
}
