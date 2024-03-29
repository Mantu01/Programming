// Q. Print the first n prime numbers. n is the number given by the user
#include<iostream>
using namespace std;
int main(){
    int a=2,n;
    cout<<"n = ";
    cin>>n;
    cout << "First "<<n<<" prime numbers are  ";
    while(n>0){
        bool b=true;
        for(int i=2;i<a;i++){
            if(a%i==0){
                b=false;
                break;
            }
        }        
        if(b){
                cout<<a<<"  ";
                n--;
        }
        a++;
    }
    return 0; 
}