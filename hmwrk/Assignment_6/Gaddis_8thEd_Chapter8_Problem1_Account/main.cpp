/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Charge Account Validation
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
    int search[18]={5658845,8080152,1005231,4520125,4562555,654231,7895122,
                    5552012,3852085,8777541,5050552,7576651,8451277,7825877,
                    7881200,1302850,1250255,4581002};
    int account;
    bool valid=false;
    //Input data
    cout<<"The program will check if your account number is valid"<<endl;
    cout<<"Input you account number"<<endl;
    cin>>account;
    //Execute function
    for(int x=0;x<18;x++){
        if (account==search[x]){
            valid=true;
        }
    }
    //Output
    if(valid==true){
        cout<<"Your account is valid"<<endl;
    }
    else{
        cout<<"Your account is invalid"<<endl;
    }
    //Exit stage right!
    return 0;
}
