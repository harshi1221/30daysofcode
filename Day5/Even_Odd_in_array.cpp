#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter an array:";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    //created a vector to push the elements of even and odd
    vector<int>even,odd;
    for(int i=0;i<size;i++){
        //if element in an array is even then push to vector even
        if(array[i] % 2 == 0){
            even.push_back(array[i]);
        }
        //if element in an array is odd then push to vector odd
        else{
            odd.push_back(array[i]);
        }
    }
     cout<<"Even numbers: ";
    //  retrieve the elements of even numbers from vector
    for(int i=0;i<even.size();i++){
       cout<<even[i]<<" ";
    }
    cout<<endl;
     cout<<"Odd numbers: ";
    //  retrieve the elements of even numbers from vector
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
}