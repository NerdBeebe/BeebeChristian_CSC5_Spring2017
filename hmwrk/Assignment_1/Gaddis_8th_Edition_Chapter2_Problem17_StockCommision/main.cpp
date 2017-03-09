/* 
 * File:   Stock Commission
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Find the amount paid for the stocks alone, the total amount of the
 *          commission and the total amount paid (after commission)
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
    unsigned short shares,//Number of shares purchased
                   stkprc,//Price of the stocks
                   stkttl,//Total spent on stocks(No commission)
                   cmmssn,//Amount of the commission
                   total;//Total paid after commission is added
    //Initialize variables
    stkprc=35;
    shares=750;    
    //Map inputs to outputs or process the data
    stkttl=stkprc*shares;
    cmmssn=stkttl*2/100;
    total=stkttl+cmmssn;
    //Output the transformed data
    cout<<"Kathryn spent $"<<stkttl<<" to purchase "<<shares<<" shares of stock."<<endl;
    cout<<"After including $"<<cmmssn<<" for the stockbroker commission,"<<endl;
    cout<<"the final total was $"<<total<<"."<<endl;
    //Exit stage right!
    return 0;
}

