#include<iostream>
using namespace std;
int common(int arr[],int arr2[],int size){
    
    for(int i=0;i<size;i++){
        int element=arr[i];
        for(int j=0;j<size;j++){
        if(element==arr2[j])
        {
            cout<<j;
        }
    }
    }
    
    
    
}
int main()
{
    int array1[3]={1,2,5};
    int array2[3]={4,3,5};
    cout<<common(array1,array2,3);
    return 0;
}