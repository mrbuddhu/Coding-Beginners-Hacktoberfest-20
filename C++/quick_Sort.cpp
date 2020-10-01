#include<iostream>
#include<cstdio>
using namespace std;
void sort(int arr[],int n){
    int temp,j;
    for(int i=n-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<arr[j]<<endl;
      }
}
