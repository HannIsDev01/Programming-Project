#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
    float sum = a+b;
    float subt = a-b;
    float mul = a*b;
    float devide = a/b; 

    cout<<"The sum is : "<<sum<<endl;
    cout<<"The subtract is : "<<subt<<endl;
    cout<<"The product is : "<<mul<<endl;
    cout<<"The division is : "<<devide<<endl;

    return 0;
}