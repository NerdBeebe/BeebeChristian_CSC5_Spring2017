/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170323 
 * Purpose:  Brute force float sum compare to multiplication
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    //Exit
    return 0;
}

