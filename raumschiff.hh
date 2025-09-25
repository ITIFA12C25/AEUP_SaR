#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H

#include <iostream>

#include "rettungskapsel.hh"

using namespace std;

class Raumschiff
{

private:

    string Name;
    int xPos;
    int yPos;
    int Besatzung;
    int Energie;
    Rettungskapsel * rk;
    Raumschiff * rs;

public:

    Raumschiff();
    ~Raumschiff();
    
    
    void setName(string inName);
    string getName();
    
    void setPosition(int inX, int inY);
    int getXPosition();
    int getYPosition();
    
	void setBesatzung(int inBesatzung);
	int getBesatzung();
    
	void setEnergie(int inEnergie);
	int getEnergie();
	
	void setRettungskapsel(Rettungskapsel * rkIN);
	Rettungskapsel * getRettungskapsel();
	
	void setRaumschiff(Raumschiff * rsIN);
	Raumschiff * getRaumschiff();
    
	void senden(string s);
	void empfangen(string s);
};

#endif // RAUMSCHIFF_H

