/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Membership Fees
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int fee=2500;      //Membership fee in $'s
    float incrs=0.04;  //Increase in membership fee per year in %
    //Initialize variables
    
    //Input data
    cout<<"This program will display the cost of membership at a country "
            "club for the next 6 years."<<endl;
    cout<<"The initial cost of membership is $2500"<<endl;
    for(int years=1;years<=6;years++){
        fee=(fee*incrs)+fee;
        cout<<"After "<<years<<" years, the total coast will be $ "<<fee<<"."<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

