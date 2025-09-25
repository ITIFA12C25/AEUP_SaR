#include <iostream>

#include "raumschiff.hh"

Raumschiff::Raumschiff()
{   
    Name = "";
    xPos = 0;
    yPos = 0;
    Besatzung = 1;
    Energie = 1;
    
    rk = new Rettungskapsel;
    cout << "Raumschiff an Adresse " << this << " erstellt" << endl;
    
    rs = NULL;
}

Raumschiff::~Raumschiff()
{
    cout << "Raumschiff an Adresse " << this << " gekillt" << endl;
}

void Raumschiff::setName(string inName)
{
    Name = inName;
}

string  Raumschiff::getName()
{
    return Name;
}

void Raumschiff::setPosition(int inX, int inY)
{
	xPos = inX;
	yPos = inY;
}

int Raumschiff::getXPosition()
{
	return xPos;
}

int Raumschiff::getYPosition()
{
	return yPos;
}

void Raumschiff::setBesatzung(int inBesatzung)
{
    Besatzung = inBesatzung;
}

int Raumschiff::getBesatzung()
{
    return Besatzung;
}

void Raumschiff::setRettungskapsel(Rettungskapsel * rkIN)
{
	rk = rkIN;
}

Rettungskapsel * Raumschiff::getRettungskapsel()
{
	return rk;
}

void Raumschiff::setRaumschiff(Raumschiff * rsIN)
{
	rs = rsIN;
}

Raumschiff * Raumschiff::getRaumschiff()
{
	return rs;
}

void Raumschiff::senden(string s)
{
    rs->empfangen(s);
}

void Raumschiff::empfangen(string s)
{
    cout << Name << " hat die Nachricht " << s << " empfangen" << endl;
}
