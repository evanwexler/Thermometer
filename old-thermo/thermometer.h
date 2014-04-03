//
//  thermometer.h
//  old-thermo
//
//  Created by Evan Wexler on 3/4/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#ifndef old_thermo_thermometer_h
#define old_thermo_thermometer_h


class thermometer {
public:
    
    thermometer(){temp = 0;} //BASE CONSTRUCTOR SETS TEMP TO 0
    thermometer( const thermometer& copy){ temp = copy.temp;} //A COPY CONSTRUCTOR
    
    char setScale(char);
    int getScale(){return scale;};
    void printScale(char);
    
    int setTemp(double);
    int getTemp() {return temp;};
    void printTemp(double);
    
    double convertToFar(double);
    double convertToCel(double);
    void printConversion(char, double); 
    
private:
    double temp;
    int scale;
};


#endif
