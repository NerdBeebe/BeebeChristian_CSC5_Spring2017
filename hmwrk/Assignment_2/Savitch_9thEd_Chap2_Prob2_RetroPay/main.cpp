/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose: Retroactive Pay
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only
float CNVYRMN=12.0f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float prevSal, //Previous salary in $'s
          yearSal, //New annual salary in $'s
          mnthSal, //New monthly salary in $'s
          rtroPay, //Retroactive pay for 6 months in $'s
          payInc=0.076f;  //Pay increase in %
    //Input or initialize values Here
    cout<<"This program will calculate your retroactive pay";
    cout<<"Input your previous salary in $'s : ";
    cin>>prevSal;
    //Process/Calculations Here
    yearSal=prevSal*(1+payInc);
    mnthSal=yearSal/CNVYRMN;
    rtroPay=prevSal*payInc/2;
    //Output Located Here
    cout<<"Your new annual salary is $"<<yearSal<<endl;
    cout<<"Your new monthly salary is $"<<mnthSal<<endl;
    cout<<"Your retroactive pay over the past 6 month was $"<<rtroPay<<endl;
    //Exit
    return 0;
}

