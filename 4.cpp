//23070123115
//bitwise operators
#include<iostream> 
using namespace std; 
int main()  
{ 
int a, b, x, y;
cout<<"Enter a number: ";                       
cin>>a; 
cout<<"Enter another number: ";                  
cin>>b; 
cout<<"Binary AND: "<<(a&b)<<"\n";               
cout<<"Binary OR: "<<(a|b)<<"\n";               
cout<<"Binary XOR: "<<(a^b)<<"\n";               
cout<<"Left Shift: "<<(a<<b)<<"\n";              
cout<<"Right Shift: "<<(a>>b)<<"\n";             
cout<<"Complement of a: "<<(x=~a)<<"\n";        
cout<<"Complement of b is: "<<(y=~b)<<"\n";
return 0;
}