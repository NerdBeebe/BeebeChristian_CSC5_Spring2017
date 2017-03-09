/* 
 * File:   Restaurant Bill
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Find the meal cost, tax amount, tip amount and total bill
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
    float mealcst,tax,tip,total;
    //Initialize variables
    mealcst=88.67;
    //Map inputs to outputs or process the data
    tax=mealcst*0.0675;
    tip=(mealcst+tax)/5;
    total=tax+tip+mealcst;       
    //Output the transformed data
    cout<<"Meal cost : $"<<mealcst<<endl;
    cout<<"Tax amount : $"<<tax<<endl;
    cout<<"Tip amount : $"<<tip<<endl;
    cout<<"Total bill : $"<<total<<endl;
    //Exit stage right!
    return 0;
}

