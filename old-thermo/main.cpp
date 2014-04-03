//
//  main.cpp
//  old-thermo
//
//  Created by Evan Wexler on 3/4/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#include <iostream> 
#include "thermometer.h"
using namespace std; 

int main(int argc, const char * argv[])
{
    char scale;
    double temp = 0;
    double temp2 = 34.5;
    
    thermometer t;
    cout << "got me a little thermometer"<< endl;
    cout<<"\n";
    
    cout << "Choose Scale(C/F)" << endl;
    cin >> scale;
    t.setScale(scale);
    t.printScale(scale);
    
    cout << "temperature is currently " << temp << endl;
    cout<<"\n";
    cout << "enter the temperature" << endl;
    cin >> temp;
    t.setTemp(temp);
    cout << "temperature is now " << temp << endl;
    cout << "\n"; 
    t.printConversion(scale, temp); 
    //MAKE SOME COPIES
    cout << "\n";
    cout << "this is a copy with another value"<< endl;
    thermometer t2(t);
    t2.printTemp(temp); //SHOULD THIS BE 0 NOW? 
    t2.setTemp(temp2);
    t2.printTemp(temp2);
    
    return 0; 
    
}

