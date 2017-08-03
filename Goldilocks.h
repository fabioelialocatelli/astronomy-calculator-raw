/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Goldilocks.h

Description: the file is the header of a class used to perform the estimation
of the boundaries of the optimal habitable zone in a solar system, given the
bolometric luminosity of a designated star

Guarantee: this programs complies with the specifications
 */

// ---------------------------------------------------------------------------

#ifndef GoldilocksH
#define GoldilocksH

class Goldilocks
{
public:
    Goldilocks();
    ~Goldilocks();
    double *boundaries(double L);
};

// ---------------------------------------------------------------------------
#endif
