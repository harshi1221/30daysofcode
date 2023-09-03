#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int>DuplicatesInArray(vector<int>&arr){
    vector<int>res;
    int n=arr.size();
    int i=1;
    sort(arr.begin(),arr.end());
    while(i<n){
        if(arr[i]==arr[i-1]){
            res.push_back(arr[i]);
        }
        i++;
    }
    return res;
}
int main(){
    int size1;
    cin>>size1;
    vector<int>array1;
   
    for(int i=0;i<size1;i++){
        int num;
        cin>>num;
        array1.push_back(num);
    }
     vector<int>duplicates =  DuplicatesInArray(array1);
     int n1=duplicates.size();
    for(int i=0;i<n1;i++){
        cout<<duplicates[i]<<" ";
    }
    return 0;
}