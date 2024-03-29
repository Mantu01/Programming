/* Q. Find the ratio in which a point lying on a line joing two other points.
    coordinates of all three points are given by user.    */

#include<iostream>
#include<cmath>
using namespace std;
bool checkPossible(float x1,float x2,float x3,float y1, float y2, float y3){
    float a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(a==0)
        return 1;
    else
        return 0;
}
int HCF(int a, int b){
    int hcf;
    for(int i=1;i<a;i++){
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Let P(x3,y3) be the points which divides the line joining points A(x1,x2) and B(x2,x3)."
    <<endl<<"Enter x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x3 and y3 : ";
    cin>>x3>>y3;
    float l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));        // Length of AB
    if(checkPossible(x1,x2,x3,y1,y2,y3)){
        int l1,l2;
        l1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));        // Length of AP
        l2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));        // Length of BP
        if(l1+l2>l){
            cout<<"P divides AB externally in the ratio = "<<l1/HCF(l1,l2)<<":"<<l2/HCF(l1,l2);
        }
        else     
            cout<<"P divides AB internally in the ratio = "<<l1/HCF(l1,l2)<<":"<<l2/HCF(l1,l2);
    }
    else
        cout<<"P("<<x3<<","<<y3<<") does not lie on the line AB.";
    return 0;
}