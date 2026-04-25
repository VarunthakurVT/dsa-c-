//there is like if we write the name of the function same and it give us error.
//Also if we just write the include library and also in that library have same parameter it will give error 
// to solve this we have header guard '
// there is like mainly 2 kind there is modern way andd the old 
// 1. you just write in cpp of that library 
// #pragma once  it should be written in like main file 


// 2. old way 
// #ifndef ANYNAMEINCAPITAL
//  #define THEABOVENAME

// #endf at the last of that thing that you want to apply this 

#include<iostream>
#include"add.h"
#include"addition.h"
int main (){
   
std::cout<<add(3,4)<<std::endl;
}