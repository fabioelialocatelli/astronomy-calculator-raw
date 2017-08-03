/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Calculator.cpp

Description: the file is the source of a class used to perform several
operations within an astronomical context; the calculations performed range
from basic operations such as magnitudes to more complicate ones, as for
instance the diameter of a designed star expressed in solar units

Guarantee: this programs complies with the specifications
 */

// Respective Header
#include "Calculator.h"

// Standard Library Header
#include <cmath>

// Call to the class relative default constructor
Calculator::Calculator()
{
}

// Call to the class relative default destructor
Calculator::~Calculator()
{
}

/** Solar units required for calculations whose output is to be expressed on
a solar scale
 */
const double Tsolar = 5777, Msolar = 4.83, MBsolar = 4.75;

/**
Prototype: double absoluteMagnitude(double m, double pc)
Description: the following function computes the absolute magnitude of a
designed star

Arguments: two argument of type double have to be submitted; as far as the
naming convention is concerned, even if the denomination does not appear to be
rather descriptive 'm' is the standard symbol for the apparent magnitude and
'pc' is the standard symbol used for Parsecs

Returns: a double value used to store the Absolute Magnitude of a designed star
 */
double Calculator::absoluteMagnitude(double m, double pc)
{
    double output = m - 5 * log10(pc / 10);
    return(output);
}

/**
Prototype: double apparentMagnitude(double M, double pc)
Description: the following function computes the apparent magnitude of a
designed star

Arguments: two argument of type double have to be submitted; as far as the
naming convention is concerned, even if the denomination does not appear to be
rather descriptive 'M' is the standard symbol for the apparent magnitude and
'pc' is the standard symbol used for Parsecs

Returns: a double value used to store the Absolute Magnitude of a designed star
 */
double Calculator::apparentMagnitude(double M, double pc)
{
    double output = M - 5 * (1 - log10(pc));
    return(output);
}

/**
Prototype: double solarDiameter(double Tstellar, double MBstellar)
Description: the following function computes the Radius of a designed star
expressed in solar units

Arguments: two argument of type double have to be submitted; the first one
stores the temperature of a particular spectral class expressed in kelvin, while
the second stores the bolometric magnitude of the current class; it is therefore
required to reference the spectral classification tables provided in order to
apply the correct temperature expressed in kelvin and the bolometric correction
valid for a specific class.

Returns: a double value used to store the diameter of a designed star expressed
in solar units
 */
double Calculator::solarDiameter(double Tstellar, double MBstellar)
{
    double const pogson = 2.511886431;
    double argument = Tsolar / Tstellar, exponent = MBsolar - MBstellar;
    double power1 = pow(argument, 2), power2 = pow(pogson, exponent),
            power3 = pow(power2, 0.5);
    double output = power1 * power3;
    return(output);
}

/**
Prototype: distanceConverter(int option, double input)
Description: the following function converts the submitted
astronomical distance according to the button pressed by the user.

Arguments: one argument of type double have to be submitted; it stores the
distance unit to be converted.

Returns: a double value used to store the result of the performed distance conversion
 */
double Calculator::distanceConverter(int option, double input)
{
    const double parsecsConversion = 0.306594845, lightYearsConversion = 3.261633440;
    double output;

    switch(option){
    case 0:
        output = input * lightYearsConversion; //Light Years
        break;
    case 1:
        output = input * parsecsConversion; //Parsecs
        break;
    default:
        output = 0;
        break;
    }

    return(output);
}

/**
Prototype: stellarLuminosity(int option, double magnitude)
Description: the following function converts the submitted luminosity
expressed in solar units according to the button pressed by the user.

Arguments: one argument of type double have to be submitted; it stores the
distance unit to be converted.

Returns: a double value used to store the result of the performed luminosity conversion
 */

double Calculator::stellarLuminosity(int option, double magnitude){

    double output;

    switch(option){
    case 0:
        output = pow(10, ((Msolar - magnitude) / 2.5)); //Absolute Luminosity
        break;
    case 1:
        output = pow(10, ((MBsolar - magnitude) / 2.5)); //Bolometric Luminosity
        break;
    default:
        output = 0;
        break;
    }

    return(output);
}
