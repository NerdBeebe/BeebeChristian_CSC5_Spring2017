/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170505
 * Purpose:  Menu for Assignment 5
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float GRAVITY=9.8f; //Gravity constant
//Function Prototypes
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);
void prob10(void);
float calculateRetail (float i,float x);
float getLength ();
float getWidth ();
float getArea (float x, float y);
float displayData(float x,float y,float z);
float getSales ();
void findHighest (float w,float x,float y,float z);
int getNumAccidents ();
void findLowest (int w,int x,int y,int z,int n);
void fallingDistance(float x);
float kineticEnergy(float x,float y);
float celsius(int f);
int coinToss();
float presentValue(float x,float y,float z);
float futureValue(float x,float y,float z);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int choice;
    
    //Show menu and loop
    do{
        //Display Menu
        menu();
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case 1: prob1();break;
            case 2: prob2();break;
            case 3: prob3();break;
            case 4: prob4();break;
            case 5: prob5();break;
            case 6: prob6();break;
            case 7: prob7();break;
            case 8: prob8();break;
            case 9: prob9();break;
            case 10: prob10();break;
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>=1&&choice<=10);
    
    //Exit stage right!
    return 0;
}

void prob10(void){
    cout<<"In problem solution 10"<<endl;
    //Declare Variables
    float preVal,intRate,months;
    //Input data
    cout<<"This program will calculate the future value in a savings account"<<endl;
    cout<<"Enter the present value in the savings account"<<endl;
    cin>>preVal;
    cout<<"Enter the interest rate for the account (1-99)"<<endl;
    cin>>intRate;
    cout<<"Enter the number of months the account will gain interest for"<<endl;
    cin>>months;
    //Execute function
    cout<<"After "<<months<<" months, the value in the account will be $";
    cout<<futureValue(preVal,intRate,months);
}

void prob9(void){
    cout<<"In problem solution 9"<<endl;
    //Declare Variables
    float futVal=10000;
    float intRate;
    float years=10.0f;
    //Input data
    cout<<"This program calculates the present value needed in a savings account"<<endl;
    cout<<"to earn $10,000 in 10 years off interest."<<endl;
    cout<<"Enter the annual interest rate of the savings account.  (1-99)"<<endl;
    cin>>intRate;
    //Execute function
    cout<<"To earn $10,000 in 10 years with an interest of "<<intRate<<"%"<<endl;
    cout<<"you will need to start with a present value of $"<<presentValue(futVal,intRate,years);
}

void prob8(void){
    cout<<"In problem solution 8"<<endl;
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int flips,outcome;
    //Input data
    cout<<"This program will flip a coin x number of times and show the results."<<endl;
    cout<<"Enter the number of coin flip to perform."<<endl;
    cin>>flips;
    //Map inputs to outputs or process the data
    for(int i=1;i<=flips;i++){
        outcome=0;
        outcome=coinToss();
        if (outcome==1){
            cout<<"On toss "<<i<<" you flipped Heads"<<endl;
        }
        else if (outcome==2){
            cout<<"On toss "<<i<<" you flipped Tails"<<endl;
        }
    }
}

void prob7(void){
    cout<<"In problem solution 7"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;

    //Execute function
    for(int i=0;i<=20;i++){
        celsius(i);
    }
}

void prob6(void){
    cout<<"In problem solution 6"<<endl;
    //Declare Variables
    float mass; //In kg's
    float veloc; //Velocity in meters/sec
    float kinEner; //Kinetic energy
    //Input data
    cout<<"This program calculates an objects kinetic energy."<<endl;
    cout<<"Enter the objects mass in kg's"<<endl;
    cin>>mass;
    cout<<"Enter the objects velocity in meters/sec"<<endl;
    cin>>veloc;
    //Execute function
    kinEner=kineticEnergy(mass,veloc);
    //Output
    cout<<"The kinetic energy of the object you described is "<<kinEner<<endl;
}

void prob5(void){
    cout<<"In problem solution 5"<<endl;
    cout<<"This program calculates the distance an object has fallen."<<endl;
    //Execute function
    for(float i=1.0f;i<=10;i++){
        fallingDistance(i);
    }
}

void prob4(void){
    cout<<"In problem solution 4"<<endl;
    //Declare Variables
    int north,east,south,west,central; 
    //Input data
    cout<<"This program reports what region had fewer automobile accidents"<<endl;
    cout<<"North"<<endl;
    north=getNumAccidents();
    cout<<"East"<<endl;
    east=getNumAccidents();
    cout<<"South"<<endl;
    south=getNumAccidents();
    cout<<"West"<<endl;
    west=getNumAccidents();
    cout<<"Central"<<endl;
    central=getNumAccidents();
    //Map inputs to outputs or process the data
    findLowest(north,east,south,west,central);
    //Exit stage right!
}

void prob3(void){
    cout<<"In problem solution 3"<<endl;
        //Declare Variables
    float ne,nw,se,sw; //All 4 divisions
    //Input data
    cout<<"This program calculates which division earned the most over a month"<<endl;
    cout<<"Northeast"<<endl;
    ne=getSales();
    cout<<"Northwest"<<endl;
    nw=getSales();
    cout<<"Southeast"<<endl;
    se=getSales();
    cout<<"Southwest"<<endl;
    sw=getSales();
    //Map inputs to outputs or process the data
    findHighest(ne,nw,se,sw);
    //Exit stage right!
}

void prob2(void){
    cout<<"In problem solution 2"<<endl;
    //Declare Variables
    float length,width,area;
    //Input data

    //Map inputs to outputs or process the data
    length=getLength();
    width=getWidth();
    area=getArea(length,width);
    displayData(length,width,area);
    //Exit stage right!
}

void prob1(void){
    cout<<"In problem solution 1"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Declare Variables
    float price,total;
    float markup;
    //Input data
    do{
    cout<<"This program calculates the price of an item after markup."<<endl;
    cout<<"Enter the whole sale price of the item."<<endl;
    cin>>price;
    cout<<"Enter the markup percent of the item."<<endl;
    cin>>markup; 
    }while(markup<0||price<0);
    //Map inputs to outputs or process the data
    total=calculateRetail(price,markup);
    cout<<"The total after the markup is $"<<total<<endl;
    //Exit stage right!
}

void menu(void){
    cout<<endl<<endl<<"Type 0 to exit"<<endl;
    cout<<"Type 1 for Mark-Up Problem"<<endl;
    cout<<"Type 2 for Rectangle Area Problem"<<endl;
    cout<<"Type 3 for Winning Division"<<endl;
    cout<<"Type 4 for Safest Driving Area Problem"<<endl;
    cout<<"Type 5 for Falling Distance Problem"<<endl;
    cout<<"Type 6 for Kinetic Energy Problem"<<endl;
    cout<<"Type 7 for Celsius Conversion Problem"<<endl;
    cout<<"Type 8 for Coin Toss Problem"<<endl;
    cout<<"Type 9 for Present Value Problem"<<endl;
    cout<<"Type 10 for Future Value Problem"<<endl<<endl;
}

float calculateRetail (float i,float x){
    float total;
    total=i*(1+(x/100));
    return total;
}

float getLength (){
    float x;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>x;
    return x;
}

float getWidth (){
    float x;
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>x;
    return x;
}

float getArea (float x, float y){
    float z;
    z=x*y;
    return z;
}

float displayData(float x,float y, float z){
    cout<<"The length of the rectangle is "<<x<<endl;
    cout<<"The width of the rectangle is "<<y<<endl;
    cout<<"The area of the rectangle is "<<z<<endl;
}

float getSales (){
    float x;
    do{
    cout<<"Enter the quarterly sales figures   (Greater than 0)"<<endl;
    cin>>x;
    }while(x<0);
    return x;
}

void findHighest (float w,float x,float y,float z){
    if (w>x&&w>y&&w>z){
        cout<<"The Northeast division had the highest quarterly earnings with $";
        cout<<w<<endl;       
    }
    else if (x>w&&x>y&&x>z){
        cout<<"The Northwest division had the highest quarterly earnings with $";
        cout<<x<<endl;       
    }
    else if (y>x&&y>w&&y>z){
        cout<<"The Southeast division had the highest quarterly earnings with $";
        cout<<y<<endl;       
    }
    else if (z>x&&z>y&&z>w){
        cout<<"The Southwest division had the highest quarterly earnings with $";
        cout<<z<<endl;       
    }
}

int getNumAccidents (){
    float x;
    do{
    cout<<"Enter the number of automobile accidents within the last year (No negatives numbers)"<<endl;
    cin>>x;
    }while(x<0);
    return x;
}

void findLowest (int w,int x,int y,int z,int n){
    if (w<x&&w<y&&w<z&&w<n){
        cout<<"The Northern region the the fewest accidents with only ";
        cout<<w<<" accidents"<<endl;     
    }
    else if (x<w&&x<y&&x<z&&x<n){
        cout<<"The Eastern region the the fewest accidents with only ";
        cout<<x<<" accidents"<<endl;     
    }
    else if (y<x&&y<w&&y<z&&y<n){
        cout<<"The Southern region the the fewest accidents with only ";
        cout<<y<<" accidents"<<endl;      
    }
    else if (z<x&&z<y&&z<w&&z<n){
        cout<<"The Western region the the fewest accidents with only ";
        cout<<z<<" accidents"<<endl;      
    }
    else if (n<x&&n<y&&n<z&&n<w){
        cout<<"The Central region the the fewest accidents with only ";
        cout<<n<<" accidents"<<endl;
    }
}

void fallingDistance(float x){
    float dist;
    dist=(pow(x,2)*GRAVITY/2);
    cout<<"Over "<<x<<" seconds, an object would have fallen "<<dist<<" meters."<<endl;
}

float kineticEnergy(float x,float y){
    float ke;
    ke=(pow(y,2)*x/2);
    return ke;
}

float celsius(int f){
    float celsius;
    celsius=((5.0f/9.0f)*(f-32.0f));
    cout<<f<<" degrees Fahrenheit is "<<celsius<<" degrees Celsius."<<endl;
}

int coinToss(){
    int toss=0;
    toss=rand()%2+1;
    return toss;
}

float presentValue(float x,float y,float z){
    float preVal=0;
    preVal+=x/(pow((1+y/100),z));
    return preVal;
}

float futureValue(float x,float y,float z){
    float futVal=0.0f;
    futVal+=pow((1+(y/100)),z)*x;
    return futVal;
}