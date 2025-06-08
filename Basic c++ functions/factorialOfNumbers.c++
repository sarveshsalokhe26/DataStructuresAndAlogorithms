//Writing a c++ code to find factorials of numbers
#include<iostream> //
using namespace std;

int main(){
    int n;
    unsigned long long factorial=1; // unsigned long data type is used to store digits having large values as factorial can have a large value and initializing factoial to one 

    cout<<"Enter a positive integer who's factorial has to be found:";
    cin>>n;

    if(n<0){
        cout<<"Factorials of negative numbers cannot be found"<<endl;
    }else{
        for(int i=1;i<=n;++i){
            factorial*=i;
        }
        cout<<"factotial of "<<n<<" is :"<<factorial<<endl;
    }
    return 0;
}