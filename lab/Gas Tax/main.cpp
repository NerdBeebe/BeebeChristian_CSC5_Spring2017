/* 
 * File:   Gas Tax Rate
 * Author: Christian Beebe
 * Created on 20170223
 * Purpose: Calculate Tax and Profit Percentages 
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
    float fedTax=0.184f,
          caTax=0.390f,
          cpTax=0.100f,
          caSlsTx=0.08f,
          oilPrft=0.07f;
    float pumpPr,basePr,nmbrGal;
    float pctTax,pctPrft;

    //Input data
    cout<<"Input the price you paid at the pump $'s/gallon."<<endl;
    cin>>pumpPr;
    cout<<"Input the number of gallons you put in you vehicle."<<endl;
    cin>>nmbrGal;
    //Map inputs to outputs or process the data
    basePr=(pumpPr-fedTax-caTax-cpTax)/(1+caSlsTx);
    pctTax=(basePr*caSlsTx+fedTax+caTax+cpTax)/basePr*100;
    pctPrft=oilPrft/basePr*100;
    //Output the transformed data
    cout<<"Federal Tax/gallon            = $ "<<fixed<<setprecision(2)<<fedTax<<endl;
    cout<<"Total Federal Tax             = $ "<<fixed<<setprecision(2)<<fedTax*nmbrGal<<endl;
    cout<<"California Tax                = $ "<<fixed<<setprecision(2)<<caTax<<endl;
    cout<<"Total California Tax          = $ "<<fixed<<setprecision(2)<<caTax*nmbrGal<<endl;
    cout<<"Cap and Trade Tax/gallon      = $ "<<fixed<<setprecision(2)<<cpTax<<endl;
    cout<<"Total Cap and Trade Tax       = $ "<<fixed<<setprecision(2)<<cpTax*nmbrGal<<endl;
    cout<<"California Sales Tax/gallon   = $ "<<fixed<<setprecision(2)<<caSlsTx*basePr<<endl;
    cout<<"Base Price/gallon             = $ "<<fixed<<setprecision(2)<<basePr<<endl;
    cout<<"Total Base Price              = $ "<<fixed<<setprecision(2)<<basePr*nmbrGal<<endl;
    cout<<"Oil Company Profit/gallon     = $ "<<fixed<<setprecision(2)<<oilPrft<<endl;
    cout<<"Total Oil Company Profit      = $ "<<fixed<<setprecision(2)<<oilPrft*nmbrGal<<endl;
    cout<<"Oil Company Profit Percentage = "<<fixed<<setprecision(2)<<pctPrft<<"%"<<endl;
    cout<<"Total Percentage Tax/gallon   = "<<fixed<<setprecision(2)<<pctTax<<"%"<<endl;
    //Exit stage right!
    return 0;
}
