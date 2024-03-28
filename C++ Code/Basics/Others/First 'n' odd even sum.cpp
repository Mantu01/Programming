/* Q. Find the sum of first 'n' :
            (i) odd numbers
           (ii) even numbers       */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum=0,count=1;
    for(int i=1;count<=n;i+=2,count++)
            sum+=i;
    cout<<"Sum of first "<<n<<" odd numbers = "<<sum;
    sum=0;
    count=1;
    for(int i=0;count<=n;i+=2,count++)
            sum+=i;
    cout<<endl<<"Sum of first "<<n<<" even numbers = "<<sum;
    return 0;
}