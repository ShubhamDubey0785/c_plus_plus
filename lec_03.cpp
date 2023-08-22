#include<iostream>
using namespace std;
int main(){
    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"a is greater than zero"<<endl;
    // }
    // else{
    //     cout<<"a is less than or equal to zero"<<endl;
    // }



//   comparing a and b
    // int c,d;
    // cin>>a>>b;
    // cout<<"The value of c and d are "<<c<<d<<"respectively"<<endl;
    // if(c>d){
    //     cout<<"c is greater than d";
    // }
    // else{
    //     cout<< "c is less than or equal to d"<<endl;
    // }


// Check number is +ve , -ve or 0
    // int e;
    // cout<<"Enter the value of e"<<endl;
    // cin>>e;
    // if(e>0){
    //     cout<<"e is a positive number"<<endl;
    // }else{
    //     if(e<0){
    //         cout<<"e is a negative number"<<endl;
    //     }else{
    //         cout<<"e is zero"<<endl;
    //     }
    // }


// Check number is +ve , -ve or 0
    // int f;
    // cout<<"Enter the value of f"<<endl;
    // cin>>f;
    // if(f>0){
    //     cout<<"f is a positive number"<<endl;
    // }else if(f<0){
    //     cout<<"f is a negative number"<<endl;
    // }else{
    //     cout<<"f is zero"<<endl;}    

    // int a=24;
    // if(a>20){
    //     cout<<"Love";
    // }else if(a==24){
    //     cout<<"Lovely";
    // }else{
    //     cout<<"Georgious";
    // }


//  Check upperCase, lowerCase or  numeric value
    // char g;
    // cout<<"Enter value: ";
    // cin>>g;
    // int h=g;
    // // cout<<h;
    // if(h>=97){
    //     cout<<"lowerCase";
    // }else if(h>=65){
    //     cout<<"upperCase";
    // }else{
    //     cout<<"Numeric value";
    // }



    //                                           Loop



    // Print number from 1 to n
    // int i,j=1;
    // cout<<"Enter number: ";
    // cin>>i;
    // while(j<=i){
    //     cout<<j<<" "<<endl;
    //     j+=1;
    // }


    // Print sum of number from 1 to n
    // int k,l=0,m=1;
    // cout<<"Enter number: ";
    // cin>>k;
    // while(m<=k){
    //     l+=m;
    //     m+=1;
    // }
    // cout<<l<<endl;


    // Check prime number
    // int n,o=2,p=0;
    // cout<<"Enter number: ";
    // cin>>n;
    // while(o<n){
    //     if(n%o==0){
    //         cout<<"not prime";
    //     }else{
    //         p=-1;
    //         o+=1;    
    //     }
    // }
    // if(p=1){
    //     cout<<"not prime number";
    // }else if(p=-1){
    //     cout<<"Prime number";
    // }


    // int q;
    // cout<<"Enter number: ";
    // cin>>q;
    // int r=1;
    // while(r<=q){
    //     int s=1;
    //     while(s<=q){
    //         cout<<"* ";
    //         s+=1;
    //     }cout<<endl;
    //     r+=1;
    // }


    // 1 1 1
    // 2 2 2 
    // 3 3 3
    // int r;
    // cout<<"Enter number: ";
    // cin>>r;
    // int s=1;
    // // int t=1;
    // while(s<=r){
    //     int t=1;
    //     while(t<=r){
    //         cout<<s;
    //         t+=1;
    //     }
    //     cout<<endl;
    //     s+=1;
    // }


    // 4444
    // 333
    // 22
    // 1
    int u;
    cout<<"Enter number: ";
    cin>>u;
    int v=1;
    while(v<=u){
        int w=u;
        while(w>0){
            cout<<u;
            w-=1;
        }cout<<endl;
        u-=1;
    }
    return 0;
}