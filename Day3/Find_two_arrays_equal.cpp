#include<bits/stdc++.h>
using namespace std;

bool ArraysEqual(vector<int>&arr1,vector<int>&arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    if(n1 != n2){
        return false;
    }
    for(int i=0;i<n1;i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int size1;
    cout<<"enter size of an array1:";
    cin>>size1;
    vector<int>array1;
    for(int i=0;i<size1;i++){
        int num;
        cin>>num;
        array1.push_back(num);
    }
    int size2;
    cout<<"enter size of an array2:";
    cin>>size2;
    vector<int>array2;
    for(int i=0;i<size2;i++){
        int num;
        cin>>num;
        array2.push_back(num);
    }
   if(ArraysEqual(array1,array2)){
        cout<<"Two arrays are equal";
    }
    else{
        cout<<"Two arrays are not equal";
    }
    return 0;
}
