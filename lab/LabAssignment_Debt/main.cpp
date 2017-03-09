/* 
 * File:   Federal Budget
 * Author: Christian Beebe
 * Created on 20170221
 * Purpose: Calculate the percentage of the federal budget that the Military and
 *          NASA are funded.
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MILLION=1.0e6f;  //1 Million
const float TRILION=1.0e12f; //1 Trillion
const float PERCENT=100.0f;  //Percent conversion
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float pop08=305e6f;    //305 million - US population 2008
    float pop16=322e6f;    //322 million - US population 2016
    float debt08=9.7e12f;  //9.7 trillion - Federal Debt 2008
    float debt16=20e12f;   //20 Trillion - Federal Debt 2016
    float per08,per16;     // Debt per capita
    float mulChng,perChng,perPer; //Multiplicative, percent and personal percent change

    //Map inputs to outputs or process the data
    per08=debt08/pop08;
    per16=debt16/pop16;
    perChng=(debt16-debt08)/debt08*PERCENT;
    mulChng=debt16/debt08;
    perPer=(per16-per08)/per08*PERCENT;
    //Output the transformed data
    cout<<"The US population in 2008 was "<<pop08/MILLION<<" million people\n";
    cout<<"The US population in 2016 was "<<pop16/MILLION<<" million people\n";
    cout<<"The Federal Debt in 2008 was $"<<debt08/TRILION<<" trillion\n";
    cout<<"The Federal Debt in 2016 was $"<<debt16/TRILION<<" trillion\n";
    cout<<"The debt per capita in 2008 was $"<<per08<<endl;
    cout<<"The debt per capita in 2016 was $"<<per16<<endl;
    cout<<"The percent change in the debt between 2008-2016 was "<<perChng<<"%\n";
    cout<<"The multiplicative change in the debt between 2008-2016 was "<<mulChng<<"x\n";
    cout<<"The personal percent change in the debt between 2008-2016 was "<<perPer<<"%\n";
    //Exit stage right!
    return 0;
}

