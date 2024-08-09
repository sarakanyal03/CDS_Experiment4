## Experiment4

## AIM
To study and implement  C++ bitwise operators. <br>

## THEORY
Bitwise Operators <br>
These operators are used to perform bit-level operations: <br>

i)  & : Bitwise AND -> Performs a logical AND operation on each pair of corresponding bits of two operands. <br>
ii)  | : Bitwise OR -> Performs a logical OR operation on each pair of corresponding bits of two operands. <br>
iii)  ^ : Bitwise XOR -> Performs a logical XOR operation on each pair of corresponding bits of two operands. <br>
iv)  ~ : Bitwise NOT -> Bits of the operand are inverted. <br>
v)  << : Left shift -> Shifts the bits of the operand to the left by a specified number of positions.<br>
vi)  >> : Right shift-> Shifts the bits of the operand to the right by a specified number of positions. <br>

## CODE 
```
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
```
## OUTPUT
![EXP4](https://github.com/sarakanyal03/CDS_Experiment4/blob/main/Screenshot%202024-07-31%20014520.png)

## CONCLUSION 
C++ bitwise operators are strong tools that allows you to deal with individual bits in data types. Low-level programming activities like hardware interface and some algorithm optimizations require them. 
