#include<iostream>
#include<cmath>
#include<limits>
using namespace std;
double add(double,double);
double subtract(double,double);
double multiply(double,double);
double divide(double,double);
double squareroot(double);
double exponentiate(double,double);
double sine(double);
double cosine(double);
double tangent(double);
int main(){
    double num1,num2;
    char operation;
    cout<<"Welcome to the Digital Calculator!"<<endl;
    while(true){
        std::cout<<"Enter Operation(+,-,*,/,sqrt,^,sin,cos,tan,quit): ";
        std::cin>>operation;
        if(operation=='q'||operation=='Q'){
            break;
        }
        std::cout<<"Enter number 1: ";
        std::cin>>num1;
        if(operation=='s'||operation=='S'){
            std::cout<<"Result"<<squareroot(num1)<<std::endl;
        }
        else if(operation=='^'){
            std::cout<<"Enter number 2";
            std::cout<<"Result"<<exponentiate(num1,num2)<<std::endl;
        }
        else if(operation=='t'||operation=='c'||operation=='t'){
            std::cout<<"Result"<<(operation=='s'? sine(num1):(operation=='c'? cosine(num1):tangent(num1)))<<std::endl;
        }
        else{
            std::cout<<"Enter number 2: ";
            std::cin>>num2;
            switch(operation){
                case '+':
                std::cout<<"Result"<<add(num1,num2)<<std::endl;
                break;
                case '-':
                std::cout<<"Result"<<subtract(num1,num2)<<std::endl;
                break;
                case '*':
                std::cout<<"Result"<<multiply(num1,num2)<<std::endl;
                break;
                case '/':
                if(num2!=0)
                std::cout<<"Result"<<divide(num1,num2)<<std::endl;
                else
                std::cout<<"Error Division by zero"<<std::endl;
                break;
                default:
                std::cout<<"Error invalid operation"<<std::endl;
            }
        }
    }
    return 0;
}
double add(double a,double b){
    return a+b;
}
double subtract(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double divide(double a,double b){
    return a/b;
}
double squareroot(double a){
    return std::sqrt (a);
}
double exponentiate(double a,double b){
    return std::pow(a,b);
}
double sine(double a){
    return std::sin(a);
}
double cosine(double a){
    return std::cos(a);
}
double tangent(double a){
    return std::tan(a);
}