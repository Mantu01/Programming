// Q. Check wheather a number given by the user is prime or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a==1){
        cout<<"1 is neither a prime nor a composite number.";
        return 0;
    }
    bool b=true;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=false;
            break;
        }
    }
    if(b)
        cout<<"The given number "<<a<<" is prime.";
    else    
        cout<<"The given number "<<a<<" is composite.";
    return 0;
}