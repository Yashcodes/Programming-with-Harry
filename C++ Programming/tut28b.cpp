#include<iostream>
using namespace std;

class c1{
    int val1;
    public:
    void indata(int a){
        val1= a;
    }

    void display(void){
        cout<<val1<<endl;
    }
};

class c2{
    int val2;
    public:
    void indata(int a){
        va2= a;
    }

    void display(void){
        cout<<val2<<endl;
    }
};
/*
trick to swap two numbers:

temp=a;
a=b;
b=temp;
*/
void exchange(c1 &x, c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    
    return 0;
}