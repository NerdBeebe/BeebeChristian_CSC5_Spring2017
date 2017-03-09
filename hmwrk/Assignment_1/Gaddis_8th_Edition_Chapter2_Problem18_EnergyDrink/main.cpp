/* 
 * File:   Energy Drink
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Find the number of customers who purchase one or more energy drinks
 *          a week and the number of those who prefer the citrus flavor.
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
    short survey,//Customers surveyed
          energy,//Customers who purchase more than one energy drink per week
          citrus;//Customers who prefer citrus
    //Initialize variables
    survey=16500;
    //Input data
    
    //Map inputs to outputs or process the data
    energy=survey*15/100;
    citrus=energy*58/100;
    //Output the transformed data
    cout<<"Of the "<<survey<<" customers surveyed, approximately "<<energy<<" customers "<<endl;
    cout<<"purchase energy drinks. Of the energy drink consumers, approximately "<<endl;
    cout<<citrus<<" customers prefer the citrus flavor"<<endl;
    //Exit stage right!
    return 0;
}

