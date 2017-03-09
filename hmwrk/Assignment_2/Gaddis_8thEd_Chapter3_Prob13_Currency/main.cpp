/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose:  Currency Conversion
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float YNPERDL=114.94f; //Yen per dollar
const float EUPERDL=0.94f;   //Euro per dollar
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float dollar,  //Amount of US $'s
          yen,     //Amount of Japanese Yen
          euro;    //Amount of Euros
    //Input or initialize values Here
    cout<<"This program will convert the value of USD to Yen and Euros"<<endl;
    cout<<"Input the amount of USD you want to convert : $";
    cin>>dollar;
    //Process/Calculations Here
    yen=YNPERDL*dollar;
    euro=EUPERDL*dollar;
    //Output Located Here
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"$"<<dollar<<" is equivalent to : "<<endl;
    cout<<"$"<<yen<<" Yen"<<endl;
    cout<<"$"<<euro<<" Euro"<<endl;
    //Exit
    return 0;
}

