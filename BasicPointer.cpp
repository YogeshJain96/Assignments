//Understanding Basic Concept of pointers
#include<iostream>
using namespace std;
int main(){
        int a=10;
        int * p=&a;
        cout<<"a="<<a<<endl;
        cout<<"&a="<<&a<<endl;
        cout<<"p="<<p<<endl;
        cout<<"&p="<<&p<<endl;
        cout<<"*p="<<*p<<endl;
        
        /* Output
         a=10
         &a=0x7ffd40b42f1c
         p=0x7ffd40b42f1c
         &p=0x7ffd40b42f20
         *p=10
         
        */
        
        return 0;
        }
