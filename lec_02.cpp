#include<iostream>
using namespace std;
int main(){
    cout<<"Namaste duniya"<< endl;
    int a=321;
    cout<<a<<endl;
    char b='c';
    // char r='vuyg';   it will give error because single inverted comma contain only single character... 
    // cout<<r<<endl;
    cout<<b<<endl;
    bool bl=true;
    cout<<bl<<endl;
    double d=1.123;
    cout<<d<<endl;
    int size=sizeof(d);
    cout<<"Size of double is: "<<size<<endl;
    int x='a';
    cout<<x<<endl;
    char ch=99;
    cout << ch<<endl;
    char ch1=123456;
    cout << ch1<<endl;
    unsigned int z=-115;  // it will first change into twos compliment then it will see that the number is unsigned int that is a positive number and it will print a large value
    cout<< z<<endl;
    int num=2/5;
    cout<<num<<endl;
    int num1=2.0/5;
    cout<<num1<<endl;
    cout<<2.0/5<<endl;
    float num2=2.0/5;
    cout<<num2<<endl;

    int q=2;
    int e=3;
    bool first=(q==e);
    cout<<first<<endl;    
    bool second=(q>e);    
    cout<<second<<endl;    
    bool third=(q<e);    
    cout<<third<<endl;    
    bool fourth=(q>=e);    
    cout<<fourth<<endl;    
    bool fifth = (q<=e);    
    cout<<fifth<<endl;    
    bool sixth=(q!=e);    
    cout<<sixth<<endl;    
    return 0;
}