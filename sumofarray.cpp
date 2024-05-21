#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remain=sum(arr+1,n-1);
    int add=arr[0]+remain;
    return add;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int ans=sum(arr,n);
    cout<<ans;
    return 0;
}