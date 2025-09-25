#include "rettungskapsel.hh"

Rettungskapsel::Rettungskapsel()
{
}

void Rettungskapsel::setSerienNr(int snIn)
{
    serienNr = snIn;
}

int Rettungskapsel::getSerienNr()
{
    return serienNr;
}

void Rettungskapsel::setFreiePlaetze(int freiePlaetzeIn)
{
	freiePlaetze = freiePlaetzeIn;
}

int Rettungskapsel::getFreiePlaetze()
{
	return freiePlaetze;
}
