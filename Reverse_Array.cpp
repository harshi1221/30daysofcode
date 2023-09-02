#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverseArray(vector<int>&arr){
    int n = arr.size();
    int i= 0;
    while(i< n){
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        i++;
        n--;
    }
}
int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    vector<int>array(size);
    cout<<"enter an array"<<endl;
    for(int i=0;i<array.size();i++){
        cin>>array[i];
    }
    reverseArray(array);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
