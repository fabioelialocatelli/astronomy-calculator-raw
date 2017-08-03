/**
Programmer: Fabio Elia Locatelli
Date: 15 October 2014
Reference: Argo - Temperate.cpp

Description: the file is the source of a polymorphic class used to perform the
estimation of the gregorian year's duration in the temperate region within the
habitable zone. It must be underlined that the calculations performed are
experimental, thus more accuracy might be implemented in the future depending
on the customers' opinions and comments.

Guarantee: this programs complies with the specifications
 */


#include "Temperate.h"

Temperate::Temperate()
{

}

Temperate::~Temperate()
{

}

double Temperate::conditions(double arg1, double arg2)
{
    double arg3 = ((arg1 + arg2) / 2.327068)* 365.2425;
    return(arg3);
}
