// Print the first n odd and even number.
#include<iostream>
using namespace std;
void printeven(int n){
    for(int i=0;n>0;n--,i+=2)
        cout<<i<<" ";
}
void printodd(int n){
    for(int i=1;n>0;n--,i+=2)
        cout<<i<<" ";
}
int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"First "<<n<<" odd numbers : ";
    printodd(n);
    cout<<endl<<endl;
    cout<<"First "<<n<<" even numbers : ";
    printeven(n);
    return 0;
}