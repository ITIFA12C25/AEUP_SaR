#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "rettungskapsel.h"
#endif // RAUMSCHIFF_H

using namespace std;

class Raumschiff
{

private:

    string Name;
    int xPos = 0;
    int yPos = 0;
    int Besatzung;
    int Energie;
    Raumschiff *rs;

public:

    Raumschiff();
    ~Raumschiff();
    void setName(string inName);
    void setPosition(int inX, int inY);
    void setBesatzung(int inBesatzung);
    void setEnergie(int inEnergie);
    void setRaumschiff(Raumschiff *r);
    void setsenden(string s);
    void setempfangen(string s);

    string getName(void);
    int getXPosition(void);
    int getYPosition(void);
    int getEnergie(void);
    int getBesatzung(void);
    string getsenden(void);
    string getempfangen(string s);

};

