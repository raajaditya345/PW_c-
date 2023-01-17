#include<iostream>
using namespace std;
int main(){
    char charType;
    short shortType;
    int integerType; 
    long longType;
    long long longlongType;
    float floatType; 
    double doubleType; 
    long double longdoubleType;
    bool boolType;
  
    cout<<"Size of char is: " <<sizeof(charType)<<endl; 
   
    cout<<"Size of short is: " <<sizeof(shortType)<<endl; 
   
    cout<<"Size of int is: " <<sizeof(integerType)<<endl; 

    cout<<"Size of long is: " <<sizeof(longType)<<endl;
   
    cout<<"Size of long long is: " <<sizeof(longlongType)<<endl;

    cout<<"Size of float is: " <<sizeof(floatType)<<endl;
  
    cout<<"Size of double is: " <<sizeof(doubleType)<<endl; 

    cout<<"Size of long double is: " <<sizeof(longdoubleType)<<endl; 

    cout<<"Size of bool is: " <<sizeof(boolType)<<endl;

    return 0;
}