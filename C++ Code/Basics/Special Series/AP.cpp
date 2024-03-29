// Q. Print AP whose first term, common difference and number of terms are given by user.    
#include<iostream>
using namespace std;
int main(){
    float a,cd;
    int n;
    cout<<"Enter the first teem : ";
    cin>>a;
    cout<<"Enter the common difference : ";
    cin>>cd;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"AP : "<<endl;
    for(int i=0;n>0;i+=cd,n--)
        cout<<"  "<<a+i;
    return 0;
}
