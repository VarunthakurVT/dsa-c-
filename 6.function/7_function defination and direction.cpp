// #include<iostream>

// int main(){
//     std::cout<<"your sum is"<<sum(34,45)<<'\n';
//     return 0;
// }
// int sum(int a,int b){   we cannot do like this instead of this 
//     return a+b;  
// }
//we do  there is two ways  like  
//1)
// #include<iostream>
// int sum(int a,int b);   this is called forward declaration 
// int main(){ 
//     std::cout<<"your sum is"<<sum(34,45)<<'\n';
//     return 0;
// }
// int sum(int a,int b){  
//     return a+b;  
// }

// Why forward declarations?

// You may be wondering why we would use a forward declaration if we could just reorder the functions to make our programs work.

// Most often, forward declarations are used to tell the compiler about the existence of some function that
//  has been defined in a different code file. Reordering isn’t possible in this scenario because the caller and 
//  the callee are in completely different files! 