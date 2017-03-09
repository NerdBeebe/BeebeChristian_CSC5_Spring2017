/* 
 * File:   CppTemplate
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose: Calculate the monthly and annual payments on car
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float loanPay,  //Monthly loan payment in $'s
          insure,   //Insurance payment in $'s
          gas,      //Monthly gas costs in $
          oil,      //Monthly oil costs in $'s
          tires,    //Monthly tire costs in $'s
          mainten,  //Monthly maintenance in $'s
          month,    //Monthly payment on the car in $'s
          annual;   //Annual payment on the car in $'s
    //Initialize variables
    cout<<"This program will calculate your monthly and annual car expenses"<<endl;
    cout<<"Input your monthly loan payment : $";
    cin>>loanPay;
    cout<<"Input your monthly insurance fee : $";
    cin>>insure;
    cout<<"Input your monthly amount spent on gas : $";
    cin>>gas;
    cout<<"Input your monthly amount spent on oil : $";
    cin>>oil;
    cout<<"Input your monthly amount spent on tires : $";
    cin>>tires;
    cout<<"Input your monthly maintenance costs : $";
    cin>>mainten;
    //Input data
    month=loanPay+insure+gas+oil+tires+mainten;
    annual=month*12;
    //Map inputs to outputs or process the data
    cout<<fixed<<setprecision(2)<<endl;        
    cout<<"Your total monthly costs are $"<<month<<endl;
    cout<<"Your total annual costs are $"<<annual<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

