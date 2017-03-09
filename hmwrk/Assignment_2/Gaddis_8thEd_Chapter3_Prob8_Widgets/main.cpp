/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose:  How many widgets?
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pallet,           //Weight of the pallet in lbs
          ttlWght,          //Weight of the pallet and widgets combined in lbs
          widWght=12.5f;          //Weight of the widgets
    unsigned short widgets; //Total number of widgets
    //Input or initialize values Here
    cout<<"This program will calculate how many widgets are on a pallet"<<endl;
    cout<<"Input the weight of the pallet by itself (in lbs) : ";
    cin>>pallet;
    cout<<"Input the total weight of the full pallet (in lbs) : ";
    cin>>ttlWght;
    //Process/Calculations Here
    widgets=(ttlWght-pallet)/widWght;
    //Output Located Here
    cout<<"There are "<<widgets<<" widgets on the pallet";
    //Exit
    return 0;
}

