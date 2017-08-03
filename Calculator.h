/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Calculator.h

Description: the file is the header of a class used to perform several
operations within an astronomical context; the calculations performed range
from basic operations such as magnitudes to more complicate ones, as for
instance the diameter of a designed star expressed in solar units

Guarantee: this programs complies with the specifications
 */

// ---------------------------------------------------------------------------

#ifndef CalculatorH
#define CalculatorH

class Calculator
{
public:
    Calculator();
    ~Calculator();
    double absoluteMagnitude(double m, double pc);
    double apparentMagnitude(double M, double pc);
    double solarDiameter(double Tstellar, double MBstellar);
    double distanceConverter(int option, double input);
    double stellarLuminosity(int option, double magnitude);
};

// ---------------------------------------------------------------------------
#endif
