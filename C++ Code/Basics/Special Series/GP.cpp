// Q. Print GP whose first term, common ratio and number of terms are given by user.    
#include<iostream>
using namespace std;
int main(){
    float a,cr;
    int n;
    cout<<"Enter the first teem : ";
    cin>>a;
    cout<<"Enter the common ratio : ";
    cin>>cr;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"GP : "<<endl;
    for(int i=1;n>0;i*=cr,n--)
        cout<<"  "<<a*i;
    return 0;
}
