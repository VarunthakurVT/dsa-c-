// #include<iostream>
// int Myage(){
// std::cout<<"Enter your age ";
// int age{};
// std::cin>>age;
// std::cout<<age<<"\n"<<age*2<<'\n';
// return age;
// }
// int main(){
//     int a{Myage()}; //this is same as int a=Myage()
//     std::cout<<a<<'\n'<<a*2; //in this we first call the function 
//     return 0;
// }
//by parameter  this is consider best
#include<iostream>
int Myage(int age){ //this is the parameter 
std::cout<<"Enter your age ";
std::cin>>age;
std::cout<<age<<"\n"<<age*2<<'\n';
return age;
}
//there is one more teleology  like unnamed parameter 
// int doSomething(int){

// } 

//in google style 
int doSomething(int /*count*/){

}
//unamed parameter can be used for many way like testing and like if you are making a game and add new level you can create by like this 
int main(){
    Myage(34);//this is the argnument we pass
    doSomething(45);
    return 0;
}


