//Writing a c++ code for sum of 10 numbers while taking inputs from users 
#include<iostream>
using namespace std;

int main(){
    int numbers[10]; //creating an array that can hold 10  integer values 
    int sum=0;//declaring the intitial value of sum to 0

    cout<<"Enter the 10 numbers that you would like to add up:"<<endl;
    
    for(int i=0;i<10;i++){
        cout<<"Number"<<i+1<<":";
        cin>>numbers[i]; // Extracting 10 numbers from user 
        sum+=numbers[i];
    }

    cout<<"Sum of given 10 numbers is:"<<sum;
    return 0;
}