#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H

using namespace std;

class Rettungskapsel
{
private:

    int serienNr;
    int freiePlaetze;

public:

    Rettungskapsel();
    ~Rettungskapsel();
    
    int getSerienNr();
    void setSerienNr(int snIn);
    
	int getFreiePlaetze();
    void setFreiePlaetze(int freiePlaetzeIn);
};

#endif // RETTUNGSKAPSEL_H

