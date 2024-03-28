/* Q. A number is given by the user,then find the sum of digits :
            (i)  at odd places.
            (ii) at even places.        */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=0,count=0;
    while(n>0){        // Reversing the digits.
        a=a*10+n%10;
        n/=10;
        count++;
    }
    int sum1=0,sum2=0;
    for(int i=1;i<=count;i++,a/=10){
        if(i%2==0)
            sum1+=a%10;
        else
            sum2+=a%10;
    }
    if(count%2==0){
        cout<<"Sum of digits at even places : "<<sum2<<endl;
        cout<<"Sum of digits at odd places : "<<sum1<<endl;
    }
    else{
        cout<<"Sum of digits at even places : "<<sum1<<endl;
        cout<<"Sum of digits at odd places : "<<sum2<<endl;
    }
    return 0;
}