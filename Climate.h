/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Climate.h

Description: the file is the header of a parent abstract class, whose children
are the classes corresponding to the three implemented climate conditions.

Guarantee: this programs complies with the specifications
 */

// ---------------------------------------------------------------------------

#ifndef ClimateH
#define ClimateH

class Climate
{
public:
    Climate();
    virtual ~Climate();
    virtual double conditions(double arg1, double arg2) = 0;
};

// ---------------------------------------------------------------------------
#endif
