/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Ocean Levels
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
    float ttlRise,ocnRise=1.5f; //The height the ocean rises every year and in total in mm
    //Initialize variables
    
    //Input data
    cout<<"This program will display the rise of the ocean over the next 25 years."<<endl;
    for(int years=1;years<=25;years++){
        ttlRise=ocnRise*years;
        cout<<"Over "<<years<<" years, the ocean will rise "<<ttlRise<<" millimeters."<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

