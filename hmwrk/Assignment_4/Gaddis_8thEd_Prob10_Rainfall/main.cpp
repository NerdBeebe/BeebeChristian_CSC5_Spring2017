/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Average Rainfall
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
    float years,ttlRain,month=0;
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate the average rainfall over a period of years"<<endl;
    cout<<"Input the number of years? ";
    cin>>years;
    
    if(years<=0){
        cout<<"The number of years you input is not valid"<<endl;
        return 1;
    }
    
    for(int i=1;i<=years;i++){
        for(int x=1;x<=12;x++){
            int n;
            cout<<"What was the average rainfall for Month "<<x<<" of Year "<<i<<endl;
            cin>>n;
            ttlRain+=n;
            month++;
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"A total of "<<month<<" months were observed"<<endl;
    cout<<"There was a total of "<<ttlRain<<" inches of rain over that period"<<endl;
    cout<<"The average rainfall per month was "<<ttlRain/month<<" inches"<<endl;
    //Exit stage right!
    return 0;
}

