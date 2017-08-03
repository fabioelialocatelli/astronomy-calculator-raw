/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Frigid.h

Description: the file is the header of a polymorphic class used to perform the
estimation of the gregorian year's duration in the frigid region within the
habitable zone. It must be underlined that the calculations performed are
experimental, thus more accuracy might be implemented in the future depending
on the customers' opinions and comments.

Guarantee: this programs complies with the specifications
 */

// ---------------------------------------------------------------------------

#ifndef FrigidH
#define FrigidH

#include "Climate.h"

class Frigid : public Climate
{
public:
    Frigid();
    ~Frigid();
    double conditions(double arg1, double arg2);
};

// ---------------------------------------------------------------------------
#endif
