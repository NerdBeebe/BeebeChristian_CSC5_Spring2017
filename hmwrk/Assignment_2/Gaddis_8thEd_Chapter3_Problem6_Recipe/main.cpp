/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose: Recipe
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float cookies;     //The number of cookies you want to bake
    float sugar=1.5f,  //The amount of sugar required in cups
          butter=1.0f, //The amount of butter required in cups
          flour=2.75f, //The amount of flour required in cups
          ratio;       //Baking ratio
    //Input or initialize values Here
    cout<<"This program will calculate the required ingredients to make a batch ";
    cout<<"of cookies"<<endl;
    cout<<"Input the amount of cookies you would like to bake : ";
    cin>>cookies;
    //Process/Calculations Here
    ratio=cookies/48;
    sugar=sugar*ratio;
    butter=butter*ratio;
    flour=flour*ratio;
    //Output Located Here
    cout<<"To make "<<cookies<<" cookies you will need :"<<endl;
    cout<<sugar<<" cups of sugar"<<endl;
    cout<<butter<<" cups of butter"<<endl;
    cout<<flour<<" cups of flour"<<endl;
    //Exit
    return 0;
}

