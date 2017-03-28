/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170328
 * Purpose:  Sum Dice
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seed the RNG
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned int nthrows=360000000;
    unsigned int f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,    //Frequency of the throws
            f8=0,f9=0,f10=0,f11=0,f12=0;
    //Input or initialize values Here
    for(int thrw=1;thrw<=nthrows;thrw++){
        char die1=rand()%6+1; //[1-6]
        char die2=rand()%6+1; //[1-6]
        char sum=die1+die2;
        switch (sum){
            case 2:f2++;break;
            case 3:f3++;break;
            case 4:f4++;break;
            case 5:f5++;break;
            case 6:f6++;break;
            case 7:f7++;break;
            case 8:f8++;break;
            case 9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"Bad Throw"<<endl;
        }
    }    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Statistics of summing and throwing 2 Die"<<endl;
    cout<<" 2 was thrown "<<f2<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 3 was thrown "<<f3<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 4 was thrown "<<f4<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 5 was thrown "<<f5<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 6 was thrown "<<f6<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 7 was thrown "<<f7<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 8 was thrown "<<f8<<" out of "<<nthrows<<" times"<<endl;
    cout<<" 9 was thrown "<<f9<<" out of "<<nthrows<<" times"<<endl;
    cout<<"10 was thrown "<<f10<<" out of "<<nthrows<<" times"<<endl;
    cout<<"11 was thrown "<<f11<<" out of "<<nthrows<<" times"<<endl;
    cout<<"12 was thrown "<<f12<<" out of "<<nthrows<<" times"<<endl;
    cout<<"Total throws = "<<(f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12)
            <<" = "<<nthrows<<endl;
    //Exit
    return 0;
}

