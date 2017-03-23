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
        cout<<"Type 1 for Sum to N Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 Error Problem"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 3"<<endl;
        cout<<"Type 5 for Problem 3"<<endl;
        cout<<"Type 6 for Problem 3"<<endl;
        cout<<"Type 7 for Problem 3"<<endl;
        cout<<"Type 8 for Problem 3"<<endl;
        cout<<"Type 9 for Problem 3"<<endl<<endl;
        
        //Input the choice
        cin>>choice;
        
        //PLace solutions to problems in switch statement
        switch(choice){
            case '1':{    
                //Declare and initialize all Variables Here
                //Make sure 0<=n<=40000
                int n=100,sum=0;
                //Input or initialize values Here

                //Process/Calculations Here
                for(int i=1;i<=n;i++){
                    sum+=i;
                }
                //Output Located Here
                cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;

                break;
            }
            case '2':{    
                //Declare and initialize all Variables Here
                int nLoop=10000000;
                float sum=0.0f,frac=0.1f;
                //Input or initialize values Here

                //Process/Calculations Here
                for(int i=1;i<=nLoop;i++){
                    sum+=frac;
                }
                //Output Located Here
                cout<<"The computed sum of "
                        <<frac<<" -> "<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
            }
            case '3':{
                cout<<"In Problem solution 3"<<endl;
                break;
            }
            case '4':{
                cout<<"In Problem solution 4"<<endl;
                break;
            }
            case '5':{
                cout<<"In Problem solution 5"<<endl;
                break;
            }
            case '6':{
                cout<<"In Problem solution 6"<<endl;
                break;
            }
            case '7':{
                cout<<"In Problem solution 7"<<endl;
                break;
            }
            case '8':{
                cout<<"In Problem solution 8"<<endl;
                break;
            }
            case '9':{
                cout<<"In Problem solution 9"<<endl;
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

