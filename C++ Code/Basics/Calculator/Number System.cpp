#include<iostream>
int rev(int a){
    int ans=0;
    while(a>0){
        ans=ans*10+a%10;
        a/=10;
    }
    return ans;
}
bool CheckBinary(int a){
    while(a>0){
        if(a%10>1)
        return false;
        a/=10;    
    }
    return true;
}
bool CheckOctal(int a){
    while(a>0){
        if(a%10>7)
        return false;
        a/=10;    
    }
    return true;
}
int btd(int a){        // Binary to demimal conversion
    int pow=1,ans=0;
    while(a>0){
        ans+=(a%10)*pow;
        pow*=2;
        a/=10;
    }
    return ans;
}
int dtb(int a){        // Decimal to binary conversion
    if(a%2!=0){
        int ans=0;
        while(a>0){
            ans= ans*10+a%2;
            a/=2;
        }
    return rev(ans);
    }
    else{
        int ans=1;
        while(a>0){
            a/=2;
            ans= ans*10+a%2;
        }
    return rev(ans)-1;
    }
}
int dto(int a){        // Decimal to octal conversion
    if(a%8!=0){
        int ans=0;
        while(a>0){
            ans= ans*10+a%8;
            a/=8;
        }
    return rev(ans);
    }
    else{
        int ans=1;
        while(a>0){
            a/=8;
            ans= ans*10+a%8;
        }
    return rev(ans)-1;
    }
}
int otd(int a){        // Octal to decimal conversion
    int pow=1,ans=0;
    while(a>0){
        ans+=(a%10)*pow;
        pow*=8;
        a/=10;
    }
    return ans;
} 
int main(){
    int x,a;
    std::cout<<"Press 1 for binary to decimal conversion"<<std::endl;
    std::cout<<"Press 2 for binary to octal conversion"<<std::endl;
    std::cout<<"Press 3 for decimal to bianry conversion"<<std::endl;
    std::cout<<"Press 4 for decimal to octal conversion"<<std::endl;
    std::cout<<"Press 5 for octal to binary conversion"<<std::endl;
    std::cout<<"Press 6 for octal to decimal conversion"<<std::endl;
    std::cin>>x;
    std::cout<<std::endl;
    switch(x){
        case 1:
            std::cout<<"Enter your binary number : ";
            std::cin>>a;
            if(CheckBinary(a))
                std::cout<<"Decimal form of "<<a<<" = "<<btd(a);
            else
                std::cout<<a<<" is not a binary number.";
            break;
        case 2:
            std::cout<<"Enter your binary number : ";
            std::cin>>a;
            if(CheckBinary(a))
                std::cout<<"Octal form of "<<a<<" = "<<dto(btd(a));
            else
                std::cout<<a<<" is not a binary number.";
            break;
        case 3:
            std::cout<<"Enter your decimal number : ";
            std::cin>>a;
            std::cout<<"Binary form of "<<a<<" is "<<dtb(a);
            break;
        case 4:
            std::cout<<"Enter your decimal number : ";
            std::cin>>a;
            std::cout<<"Octal form of "<<a<<" is "<<dto(a);
            break;
        case 5:
            std::cout<<"Enter your octal number : ";
            std::cin>>a;
            if(CheckOctal(a))
                std::cout<<"Binary form of "<<a<<" is "<<dtb(otd(a));
            else
                std::cout<<a<<" is not a octal number.";    
            break;
        case 6:
            std::cout<<"Enter your octal number : ";
            std::cin>>a;
            if(CheckOctal(a))
                std::cout<<"Decimal form of "<<a<<" is "<<otd(a);
            else
                std::cout<<a<<" is not a octal number.";
            break;
        default :
            std::cout<<"Invalid option";    
    }
    return 0;
}