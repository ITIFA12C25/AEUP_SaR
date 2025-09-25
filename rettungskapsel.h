#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H

#endif // RETTUNGSKAPSEL_H

using namespace std;

class Rettungskapsel
{
private:

    int serienNr = 888;
    int freiPlaetze;

public:

    Rettungskapsel();
    ~Rettungskapsel();
    int getSerienNr();
    int getFreiePlaetze();
    void setSerienNr(int);
    void setFreiePlaetze(int);
};
