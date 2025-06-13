//Writng a simple c++ code to create and display array
#include<iostream>
using namespace std;

int main(){
    //declaring an array of 5 integers
    int numbers[5];
    
    //Input values into the array
    cout<<"Enter 5 numbers :"<<endl;
    for(int i=0;i<5;i++){
        cin>>numbers[i];
    }

    // Displaing the input values 
    cout<<"Displaying the values stored into the array : ";
    for(int i=0;i<5;i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}