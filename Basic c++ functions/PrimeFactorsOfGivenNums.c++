//writing a C++ code for finding prime factors of given number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the positive number who's prime factorial has to be found";
    cin>>n;
    cout<<"prime factorials of "<<n<<" are :";
    
    //finding the positive prime factorials 
    while(n%2==0){
        cout<<2<<"";
        n=n/2;
    }

    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            cout<<i<<"";
            n=n/i;
        }     
    }

    if(n>2){
        cout<<n;
        cout<<endl;
    }
    return 0;
}


