// Q. Print the first n perfect number. n is the number given by the user
#include<iostream>
using namespace std;
int main(){
    int a=6,n;
    cout<<"n = ";
    cin>>n;
    cout << "First "<<n<<" perfect numbers are  ";
    while(n>0){
        int b=0;
        for(int i=1;i<a;i++){
            if(a%i==0){
                b+=i;
            }
        }        
        if(a==b){
            cout<<a<<"  ";
            n--;
        }
        a++;
    }
    return 0; 
}