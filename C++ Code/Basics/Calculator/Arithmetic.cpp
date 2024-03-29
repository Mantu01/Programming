#include<iostream>
using namespace std;
int operation(int a, int b, char c){
    int r;
    switch(c){
        case '+' : 
            r=a+b;
            break;
        case '-' : 
            r=a-b;
            break;
        case '*':
            r=a*b;
            break;
        case '%':
            r=a%b;
            break;
        case '/':
            r=a/b;
            break;
    }
    return r;
}
int main(){
    int a,b;
    char c;
    cout<<"enter the numbers and operator : "<<endl;
        cin>>a;
    while(c!='='){
        cin>>c;
        if(c!='='){
            cin>>b;
            a=operation(a,b,c);
        }
    }
    cout<<a;
    return 0;
}