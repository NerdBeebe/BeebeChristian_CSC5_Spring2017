/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170323
 * Purpose: Menu to be utilized on Homework
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
    char choice;
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Membership Fees Problem"<<endl;
        cout<<"Type 2 for Distance Problem"<<endl;
        cout<<"Type 3 for ASCII Problem"<<endl;
        cout<<"Type 4 for Temperature Problem"<<endl;
        cout<<"Type 5 for Ocean Levels Problem"<<endl;
        cout<<"Type 6 for Calories Burned Problem"<<endl;
        cout<<"Type 7 for Sum of Numbers Problem"<<endl;
        cout<<"Type 8 for Hotel Occupancy Problem"<<endl;
        cout<<"Type 9 for Average Rainfall Problem"<<endl<<endl;
        
        //Input the choice
        cin>>choice;
        
        //PLace solutions to problems in switch statement
        switch(choice){
            case '1':{  
                cout<<"In Problem solution 1"<<endl;
                //Declare Variables
                int fee=2500;      //Membership fee in $'s
                float incrs=0.04;  //Increase in membership fee per year in %
                //Initialize variables

                //Input data
                cout<<"This program will display the cost of membership at a country "
                "club for the next 6 years."<<endl;
                cout<<"The initial cost of membership is $2500"<<endl;
                for(int years=1;years<=6;years++){
                    fee=(fee*incrs)+fee;
                    cout<<"After "<<years<<" years, the total coast will be $ "<<fee<<"."<<endl;
                }

                break;
            }
            case '2':{   
                cout<<"In Problem solution 2"<<endl;
                //Declare Variables
                int dist,speed,time;  //Distance in miles, speed in MPH, time in hours
                //Initialize variables

                //Input data
                cout<<"This program will calculate how far you travel after every hour"<<endl;
                cout<<"What is the speed of the vehicle in MPH? (Positive number) ";
                cin>>speed;
                cout<<"How many hours has it traveled? (Number greater than 0) ";
                cin>>time;

                if(speed<0||time<=0){
                    cout<<"You input and incorrect integer.";
                    return 1;
                }

                cout<<"Hour     Distance Traveled"<<endl;
                cout<<"--------------------------"<<endl;


                for(int n=1;n<=time;n++){
                    dist=speed*n;
                    cout<<n<<"               "<<dist<<endl;
                }
                break;
            }
            case '3':{
                cout<<"In Problem solution 3"<<endl;
                //Declare and initialize all Variables Here
    
                //Input or initialize values Here
                cout<<"This program writes out all of the ASCII code"<<endl;
                //Process/Calculations Here
                for(int i=1;i<=127;i++){
                    char ch=i;
                    cout<<i<<" = "<<ch<<" in ASCII code"<<endl;
                }
                break;
            }
            case '4':{
                cout<<"In Problem solution 4"<<endl;
                    //Declare all Variables Here
                    float fahren,    //Temperature in Fahrenheit
                          celsius;   //Temperature in Celsius
                    //Input or initialize values Here
                    cout<<"This program will convert 0-20 Celsius to Fahrenheit"<<endl;
                    //Process/Calculations Here
                    for(celsius=0;celsius<=20;celsius++){
                    fahren=9*celsius/5+32;
                    //Output Located Here
                    cout<<celsius<<" degrees Celsius is "<<fahren<<" degrees Fahrenheit"<<endl;
                    }
                break;
            }
            case '5':{
                cout<<"In Problem solution 5"<<endl;
                //Declare Variables
                float ttlRise,ocnRise=1.5f; //The height the ocean rises every year and in total in mm
                //Initialize variables

                //Input data
                cout<<"This program will display the rise of the ocean over the next 25 years."<<endl;
                for(int years=1;years<=25;years++){
                    ttlRise=ocnRise*years;
                    cout<<"Over "<<years<<" years, the ocean will rise "<<ttlRise<<" millimeters."<<endl;
                }
                break;
            }
            case '6':{
                cout<<"In Problem solution 6"<<endl;
                    //Declare Variables
                    float ttlCal,calBurn=3.6f; //The total calories burned and calories burned per minute while walking
                    //Initialize variables

                    //Input data
                    cout<<"This program will display the calories burned after walking 5,10,15,20"
                            ",25 and 30 minutes."<<endl;
                    for(int minutes=1;minutes<=30;minutes++){
                        ttlCal=calBurn*minutes;
                        if(minutes%5==0){
                        cout<<"Over "<<minutes<<" minutes, you will burn "<<ttlCal<<" calories."<<endl;
                        }
                    }
                break;
            }
            case '7':{
                cout<<"In Problem solution 7"<<endl;
                    //Declare and initialize all Variables Here
                    //Make sure 0<=n<=40000
                    int n,sum=0;
                    //Input or initialize values Here
                    cout<<"Input a positive integer ";
                    cin>>n;

                    if(n<0){
                        cout<<"A negative number was input"<<endl;
                        return 1;
                    }
                    //Process/Calculations Here
                    for(int i=1;i<=n;i++){
                        sum+=i;
                    }
                    //Output Located Here
                    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
                    cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
                break;
            }
            case '8':{
                cout<<"In Problem solution 8"<<endl;
                    //Declare Variables
                    float floors,rooms,occupy; //User input data
                    float perc;                //Percentage of rooms occupied
                    //Initialize variables

                    //Input data
                    cout<<"This program will determine the occupancy rate of a hotel"<<endl;
                    cout<<"How many floors does the hotel have? ";
                    cin>>floors;

                    for(int i=1;i<=floors;i++){
                        int x,n;
                        cout<<"How many rooms are on Floor "<<i<<"? ";
                        cin>>x;
                        cout<<"How many of those rooms are occupied? ";
                        cin>>n;
                        rooms+=x;
                        occupy+=n;
                    }
                    //Map inputs to outputs or process the data

                    //Output the transformed data
                    cout<<"The hotel has "<<rooms<<" rooms"<<endl;
                    cout<<occupy<<" rooms are occupied"<<endl;
                    cout<<rooms-occupy<<" rooms are unoccupied"<<endl;
                    cout<<"The hotel is "<<occupy/rooms*100<<"% occupied"<<endl;
                break;
            }
            case '9':{
                cout<<"In Problem solution 9"<<endl;
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
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
            
        }
    }while(choice>='1'&&choice<='9');
        
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

