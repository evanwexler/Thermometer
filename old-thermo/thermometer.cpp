//
//  thermometer.cpp
//  old-thermo
//
//  Created by Evan Wexler on 3/4/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "thermometer.h"
using namespace std;

char thermometer::setScale(char x)
{
    return x;
};

void thermometer::printScale(char x){
    if (x == 'F' || x == 'f')
    {
        cout << "scale is farenheit"<< endl;
    }
    else if (x == 'C' || x == 'c')
    {
        cout << "scale is centigrade"<< endl;
    }
    else
    {
        cout<< "choose scale"<< endl;
    }
};

int thermometer::setTemp(double x)
{
    temp = x;
    return 0;
};

void thermometer::printTemp(double x) {
    cout << getTemp() << endl;
};

double thermometer::convertToFar(double x){
    return (x/1.8)+32;
};

double thermometer::convertToCel(double x){
    return (x*1.8)+32;
};

void thermometer::printConversion(char scale, double x) {
    
    if (scale == 'F' || scale == 'f')
    {
        cout << convertToCel(x)<< " centigrade" << endl;
    }
    else 
    {
        cout << convertToFar(x)<< " farenheit" << endl;
    }
};