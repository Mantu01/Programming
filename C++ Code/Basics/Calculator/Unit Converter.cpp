#include<iostream>
void length(int x){
    float a,b;
    switch(x){
        case 1:
            b=1609.34;        // b is 1 mile in meter.
            std::cout<<"Enter miles : ";
            std::cin>>a;
            std::cout<<a<<" miles = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" miles = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" miles = "<<10*b*a<<" decimeter."<<std::endl;
            std::cout<<a<<" miles = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" miles = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" miles = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" miles = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" miles = "<<a*b*3.28<<" feet."<<std::endl;
            std::cout<<a<<" miles = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" miles = "<<a*b*1.09<<" yards."<<std::endl;
            break;
        case 2:
            b=0.9144;            // b is 1 yard in meter;
            std::cout<<"Enter yards : ";
            std::cin>>a;
            std::cout<<a<<" yards = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" yards = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" yards = "<<10*b*a<<" decimeter."<<std::endl;
            std::cout<<a<<" yards = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" yards = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" yards = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" yards = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" yards = "<<a*b*3.28<<" feet."<<std::endl;
            std::cout<<a<<" yards = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" yards = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 3:
            b=0.0254;            // b is 1 inch in meter
            std::cout<<"Enter inches : ";
            std::cin>>a;
            std::cout<<a<<" inches = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" inches = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" inches = "<<10*b*a<<" decimeter."<<std::endl;
            std::cout<<a<<" inches = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" inches = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" inches = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" inches = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" inches = "<<a*b*3.28<<" feet."<<std::endl;
            std::cout<<a<<" inches = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" inches = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 4:
            b=0.3048;                // b is 1 foot in meter
            std::cout<<"Enter feet : ";
            std::cin>>a;
            std::cout<<a<<" feet = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" feet = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" feet = "<<10*b*a<<" decimeter."<<std::endl;
            std::cout<<a<<" feet = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" feet = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" feet = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" feet = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" feet = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" feet = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" feet = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 5:
            b=0.001;        // b is 1 centimeter in meter
            std::cout<<"Enter centimeter : ";
            std::cin>>a;
            std::cout<<a<<" centimeter = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" centimeter = "<<10*b*a<<" decimeter."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" centimeter = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" centimeter = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 6:
            b=0.01;        // b is 1 decimeter in meter
            std::cout<<"Enter Decimeter : ";
            std::cin>>a;
            std::cout<<a<<" Decimeter = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" Decimeter = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" Decimeter = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" Decimeter = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 7:
            std::cout<<"Enter meter : ";
            std::cin>>a;
            std::cout<<a<<" meter = "<<1000*a<<" milimeter."<<std::endl;
            std::cout<<a<<" meter = "<<100*a<<" centimeter."<<std::endl;
            std::cout<<a<<" meter = "<<a*10<<" decimeter."<<std::endl;
            std::cout<<a<<" meter = "<<a/10<<" decameter."<<std::endl;
            std::cout<<a<<" meter = "<<a/100<<" hectometer."<<std::endl;
            std::cout<<a<<" meter = "<<a/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" meter = "<<a*39.37<<" inches."<<std::endl;
            std::cout<<a<<" meter = "<<3.28*a<<" feet."<<std::endl;
            std::cout<<a<<" meter = "<<a*1.09<<" yards."<<std::endl;
            std::cout<<a<<" meter = "<<a*0.000621<<" miles."<<std::endl;
            break;
        case 8:
            b=10;         // b is 1 decameter in meter
            std::cout<<"Enter decameter : ";
            std::cin>>a;
            std::cout<<a<<" Decameter = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" Decameter = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b*10<<" decimeter."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" Decameter = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" Decameter = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 9:
            b=100;            // b is 1 hectometer in meter
            std::cout<<"Enter hectometer : ";
            std::cin>>a;
            std::cout<<a<<" hectometer = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" hectometer = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b*10<<" decimeter."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" hectometer = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" hectometer = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 10:
            b=1000;            // b is 1 kilometer in meter
            std::cout<<"Enter kilometer :";
            std::cin>>a;
            std::cout<<a<<" kilometer = "<<1000*b*a<<" milimeter."<<std::endl;
            std::cout<<a<<" kilometer = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b*10<<" decimeter."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" kilometer = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" kilometer = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
        case 11:
            b=1000;            // b is 1 milimeter in meter
            std::cout<<"Enter milimeter : ";
            std::cin>>a;
            std::cout<<a<<" milimeter = "<<100*b*a<<" centimeter."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b*10<<" decimeter."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b<<" meter."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b/10<<" decameter."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b/100<<" hectometer."<<std::endl;
            std::cout<<a<<" milimeter = "<<b*a/1000<<" kilometer."<<std::endl;
            std::cout<<a<<" miliometer = "<<a*b*39.37<<" inches."<<std::endl;
            std::cout<<a<<" milimeter = "<<3.28*b*a<<" feet."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b*1.09<<" yards."<<std::endl;
            std::cout<<a<<" milimeter = "<<a*b*0.000621<<" miles."<<std::endl;
            break;
            
    }
}
void mass(int x){
    float a,b;
    switch(x){
        case 1:
            b=453.59237;            // b is 1 pound in gram
            std::cout<<std::endl<<"Enter pound : ";
            std::cin>>a;
            std::cout<<a<<" pound = "<<a*b<<" gram";
            std::cout<<a<<" pound = "<<a*b*1000<<" kilogram.";
            std::cout<<a<<" pound = "<<a*b*0.03527396<<" ounce.";
            break;
        case 2:
            b=28.349523;            // b is 1 ounce in gram
            std::cout<<std::endl<<"Enter Ounce : ";
            std::cin>>a;
            std::cout<<a<<" ounce = "<<a*b<<" gram.";
            std::cout<<a<<"ounce = "<<a*b*1000<<" kilogram.";
            std::cout<<a<<"ounce = "<<a*b*0.00220462<<" pound.";
            break;
        case 3:
            std::cout<<std::endl<<"Enter gram : ";
            std::cin>>a;
            std::cout<<a<<"gram = "<<a*b*1000<<" kilogram.";
            std::cout<<a<<"gram = "<<a*b*0.00220462<<" pound.";
            std::cout<<a<<" gram = "<<a*b*0.03527395<<" ounce.";
            break;
        case 4:
            b=1000;            // b is 1 kilogram in gram
            std::cout<<std::endl<<"Enter Kilogram : ";
            std::cin>>a;
            std::cout<<a<<"kilogram = "<<a*b<<" gram.";       
            std::cout<<a<<"kilogram = "<<a*b*0.00220462<<" pound.";       
            std::cout<<a<<"kilogram = "<<a*b*0.03527395<<" ounces.";
            break;
    }
}
void capacity(int x){
    float a,b;
    switch(x){
        case 1:
            std::cout<<"Enter litre : ";
            std::cin>>a;
            std::cout<<a<<" litre = "<<0.0063*a<<" oil barrel."<<std::endl;
            std::cout<<a<<" litre = "<<0.001*a<<" Cubic meter."<<std::endl;
            std::cout<<a<<" litre = "<<0.035315*a<<" cubic feet."<<std::endl;
            std::cout<<a<<" litre = "<<61.023744*a<<" cubic inche."<<std::endl;
            std::cout<<a<<" litre = "<<0.001308*a<<" cubic yard."<<std::endl;
            break;
        case 2:
            b=158.987295;            // b is 1 oil barrel in litre.
            std::cout<<"Enter oil barrel : ";
            std::cin>>a;
            std::cout<<a<<" oil barrel = "<<a*b<<" litre."<<std::endl;
            std::cout<<a<<" oil barrel = "<<0.001*a*b<<" Cubic meter."<<std::endl;
            std::cout<<a<<" oil barrel = "<<0.035315*a*b<<" cubic feet."<<std::endl;
            std::cout<<a<<" oil barrel = "<<61.023744*a*b<<" cubic inche."<<std::endl;
            std::cout<<a<<" oil barrel = "<<0.001308*a*b<<" cubic yard."<<std::endl;
            break;
        case 3:
            b=1000;            // b is 1 cubic meter in litre.
            std::cout<<"Enter cubic meter : ";
            std::cin>>a;
            std::cout<<a<<" cubic meter = "<<a*b<<" litre."<<std::endl;
            std::cout<<a<<" cubic meter = "<<0.0063*a*b<<" oil barrel."<<std::endl;
            std::cout<<a<<" cubic meter = "<<0.035315*a*b<<" cubic feet."<<std::endl;
            std::cout<<a<<" cubic meter = "<<61.023744*a*b<<" cubic inche."<<std::endl;
            std::cout<<a<<" cubic meter = "<<0.001308*a*b<<" cubic yard."<<std::endl;
            break;
        case 4:
            b=28.31685;            // b is 1 cubic feet in litre.
            std::cout<<"Enter cubic foot : ";
            std::cin>>a;
            std::cout<<a<<" cubic feet = "<<a*b<<" litre."<<std::endl;
            std::cout<<a<<" cubic feet = "<<0.001*a*b<<" cubic meter."<<std::endl;
            std::cout<<a<<" cubic feet = "<<0.0063*a*b<<" oil barrel."<<std::endl;
            std::cout<<a<<" cubic feet = "<<61.023744*a*b<<" cubic inche."<<std::endl;
            std::cout<<a<<" cubic feet = "<<0.001308*a*b<<" cubic yard."<<std::endl;
            break;
        case 5:
            b=0.01639;            // b is 1 cubic inch in litre.
            std::cout<<"Enter cubic inch : ";
            std::cin>>a;
            std::cout<<a<<" cubic inch = "<<a*b<<" litre."<<std::endl;
            std::cout<<a<<" cubic inch = "<<0.001*a*b<<" cubic meter."<<std::endl;
            std::cout<<a<<" cubic inch = "<<0.0063*a*b<<" oil barrel."<<std::endl;
            std::cout<<a<<" cubic inch = "<<0.035315*a*b<<" cubic feet."<<std::endl;
            std::cout<<a<<" cubic inch = "<<0.001308*a*b<<" cubic yard."<<std::endl;
            break;
        case 6:
            b=765.5549;            // b is 1 cubic yard in litre.
            std::cout<<"Enter cubic yard : ";
            std::cin>>a;
            std::cout<<a<<" cubic yard = "<<a*b<<" litre."<<std::endl;
            std::cout<<a<<" cubic yard = "<<0.001*a*b<<" cubic meter."<<std::endl;
            std::cout<<a<<" cubic yard = "<<0.0063*a*b<<" oil barrel."<<std::endl;
            std::cout<<a<<" cubic yard = "<<61.0238*a*b<<" cubic inch."<<std::endl;
            std::cout<<a<<" cubic yard = "<<0.035315*a*b<<" cubic feet."<<std::endl;
            break;
    }
}
void temperature(int x){
    float a;
    switch(x){
        case 1:
            std::cout<<"Enter temperature in ⁰C : ";
            std::cin>>a;
            std::cout<<a<<" ⁰C = "<<(a*9/5)+32<<" ⁰F."<<std::endl;
            std::cout<<a<<" ⁰C = "<<a+273.15<<" kelvin."<<std::endl;
            break;
        case 2:
            std::cout<<"Enter temperature in ⁰F : ";
            std::cin>>a;
            std::cout<<a<<" ⁰F = "<<(a-32)*5/9<<" ⁰C."<<std::endl;
            std::cout<<a<<" ⁰F = "<<((a-32)*5/9)+273.15<<" kelvin."<<std::endl;
            break;
        case 3:
            std::cout<<"Enter temperature in kelvin : ";
            std::cin>>a;
            std::cout<<a<<" kelvin = "<<((a-273.15)*9/5)+32<<" ⁰F."<<std::endl;
            std::cout<<a<<" kelvin = "<<a-273.15<<" ⁰C."<<std::endl;
            break;
    }
}
int main(){
    int x;
    std::cout<<"Press 1 for length conversion"<<std::endl;
    std::cout<<"Press 2 for mass conversion "<<std::endl;
    std::cout<<"Press 3 for capacity conversion"<<std::endl;
    std::cout<<"Press 4 for Temperature conversion"<<std::endl;
    std::cin>>x;
    std::cout<<std::endl;
    int count=1;
    char a='n';
    switch(x){
        case 1:
            std::cout<<"SI unit of length is meter(m)."<<std::endl;
            std::cout << "Choose the unit for your input length.Press 'y' for Yes and other key for No."<<std::endl;
            while(count){
                switch(count){
                    case 1:
                        std::cout<<"Miles -->  ";
                        break;
                    case 2:
                        std::cout<<"Yards  -->  ";
                        break;
                    case 3:
                        std::cout<<"Inches  -->  ";
                        break;
                    case 11:
                        std::cout<<"Milimeter  -->  ";
                        break;
                    case 5:
                        std::cout<<"Centimeter  -->  ";
                        break;
                    case 6:
                        std::cout<<"Decimeter  -->  ";
                        break;
                    case 7:
                        std::cout<<"Meter  -->  ";
                        break;
                    case 8:
                        std::cout<<"Decameter  -->  ";
                        break;
                    case 9:
                        std::cout<<"Hectometer  -->  ";
                        break;
                    case 10:
                        std::cout<<"Kilometer  -->  ";
                        break;
                    case 4:
                        std::cout<<"Feet  -->  ";
                        break;
                    default :
                        std::cout<<"You heven't choose any option.";
                        return 0;
                }
                std::cin>>a;
                if(a=='y' || a=='Y'){
                    length(count);
                    break;
                }
                count++;
            }
            break;
        case 2:
            std::cout<<"SI unit of mass is kilogram(Kg)."<<std::endl;
            std::cout << "Choose the unit for your input mass.Press 'y' for Yes and other key for No."<<std::endl;
            while(count){
                switch(count){
                    case 1:
                        std::cout<<"Pounds -->  ";
                        break;
                    case 2:
                        std::cout<<"Ounces  -->  ";
                        break;
                    case 3:
                        std::cout<<"Gram  -->  ";
                        break;
                    case 4:
                        std::cout<<"Kilogram  -->  ";
                        break;
                    default :
                        std::cout<<"You heven't choose any option.";
                        return 0;
                }
                std::cin>>a;
                if(a=='y' || a=='Y'){
                    mass(count);
                    break;
                }
                count++;
            }
            break;
        case 3:
            std::cout<<"SI unit of volume( Capacity ) is Litre(L)."<<std::endl;
            std::cout << "Choose the unit for your input capacity.Press 'y' for Yes and other key for No."<<std::endl;
            while(count){
                switch(count){
                    case 1:
                        std::cout<<"Litre -->  ";
                        break;
                    case 2:
                        std::cout<<"Oil barrel  -->  ";
                        break;
                    case 3:
                        std::cout<<"Cubic meter  -->  ";
                        break;
                    case 4:
                        std::cout<<"Cubic foot  -->  ";
                        break;
                    case 5:
                        std::cout<<"Cubic inch  -->  ";
                        break;
                    case 6:
                        std::cout<<"Cubic yard  -->  ";    
                    default :
                        std::cout<<"You heven't choose any option.";
                        return 0;
                }
                std::cin>>a;
                if(a=='y' || a=='Y'){
                    capacity(count);
                    break;
                }
                count++;
            }
            break;
        case 4:
            std::cout<<"SI unit of temperature is Kelvin(K)."<<std::endl;
            std::cout << "Choose the unit for your input temperature.Press 'y' for Yes and other key for No."<<std::endl;
            while(count){
                switch(count){
                    case 1:
                        std::cout<<"Celsius -->  ";
                        break;
                    case 2:
                        std::cout<<"Farenheit  -->  ";
                        break;
                    case 3:
                        std::cout<<"Kelvin  -->  ";
                        break;
                    default :
                        std::cout<<"You heven't choose any option.";
                        return 0;
                }
                std::cin>>a;
                if(a=='y' || a=='Y'){
                    temperature(count);
                    break;
                }
                count++;
            }
            break;
        default:
            std::cout<<"Invalid option";
            return 0;
    }
    return 0;
}