/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Goldilocks.cpp

Description: the file is the source of a class used to perform the estimation
of the boundaries of the optimal habitable zone in a solar system, given the
bolometric luminosity of a designated star

Guarantee: this programs complies with the specifications
 */

// Respective Header
#include "Goldilocks.h"

// Standard Library Header
#include <cmath>

// Call to the class relative default constructor
Goldilocks::Goldilocks()
{
}

// Call to the class relative default destructor
Goldilocks::~Goldilocks()
{
}

/**
Prototype: double *Goldilocks::boundaries(double L)
Description: the following function computes the boundaries of the
habitable zone for a particular star.

Arguments: one argument of type double has to be submitted; as far as the
naming convention is concerned, even if the denomination does not appear to be
rather descriptive 'L' is the standard symbol for the bolometric luminosity.

Returns: an array whose beginning points to a double; this has been implemented in
order to simulate the return of multiple parameters to the main function
 */

double *Goldilocks::boundaries(double L)
{
    const int length = 2;
    double *optimalBoundaries = new double[length];

    const double inner = 1.1, outer = 0.53;
    double argument1 = L / inner, argument2 = L / outer;
    optimalBoundaries[0] = sqrt(argument1);
    optimalBoundaries[1] = sqrt(argument2);
    return(optimalBoundaries);
}
