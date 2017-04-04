/* 
 * Author: Christian Beebe
 * Created on 20170323 
 * Purpose:  ASCII Code
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
    //Declare and initialize all Variables Here
    
    //Input or initialize values Here
    cout<<"This program writes out all of the ASCII code"<<endl;
    //Process/Calculations Here
    for(int i=1;i<=127;i++){
        char ch=i;
        cout<<i<<" = "<<ch<<" in ASCII code"<<endl;
    }
    //Output Located Here

    //Exit
    return 0;
}