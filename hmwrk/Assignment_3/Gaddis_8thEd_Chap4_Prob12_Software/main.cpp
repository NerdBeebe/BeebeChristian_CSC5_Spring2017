/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Calculate the discount given by the retailer
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
    float price=99, //Price of the software in $'s
          total;    //Total cost in $'s
    int   units;    //Number of units purchased
    //Initialize variables
    cout<<"This program will calculate the discount given by the retailer"<<endl;
    cout<<"Enter the number of products purchased : ";
    cin>>units;
    if (units<=0){
        cout<<"Please enter positive value for the number of units purchased"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data
    total=price*units;
    //Output the transformed data
    switch(units/10){
        case 0:cout<<"The total cost for "<<units<<" units is $"<<total<<endl;break;
        case 1:cout<<"The total cost for "<<units<<" units is $"<<total*0.8<<endl;break;
        case 2:cout<<"The total cost for "<<units<<" units is $"<<total*0.7<<endl;break;
        case 3:cout<<"The total cost for "<<units<<" units is $"<<total*0.7<<endl;break;
        case 4:cout<<"The total cost for "<<units<<" units is $"<<total*0.7<<endl;break;
        case 5:cout<<"The total cost for "<<units<<" units is $"<<total*0.6<<endl;break;
        case 6:cout<<"The total cost for "<<units<<" units is $"<<total*0.6<<endl;break;
        case 7:cout<<"The total cost for "<<units<<" units is $"<<total*0.6<<endl;break;
        case 8:cout<<"The total cost for "<<units<<" units is $"<<total*0.6<<endl;break;
        case 9:cout<<"The total cost for "<<units<<" units is $"<<total*0.6<<endl;break;
        default:cout<<"The total cost for "<<units<<" units is $"<<total*0.5<<endl;
    }
    return 0;
}
