#include<iostream>
using namespace std;
int main(){

int A,B,C;
    cout<<"Enter 1st Number: ";
    cin>>A;
    cout<<"Enter 2nd Number: "; 
    cin>>B;
    C=A;
    A=B;
    B=C;

    cout<<" Value of Number = "<<A<<B;
   
    
    return 0;
}