#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"

using namespace std;

int main()
{
    Raumschiff *s1 = new Raumschiff;
    Raumschiff *s2 = new Raumschiff;

    Rettungskapsel *rk1;
    cout << rk1 << endl;
    s1->setRettung(rk1);
    cout << s1->getRettung() << endl;
    s1->setRettung(rk1);

    s1->setName("Enterprise");
    s2->setName("Voyager");

    cout << s1->getName() << endl;
    cout << s2->getName() << endl;

    s1->setRaumschiff(s2);
    s2->setRaumschiff(s1);

    s1->senden("Hallo, ist da jemand?");

    delete s1;

    cout << rk1->getSerienNr() << endl;

    return 0;
}

Raumschiff::Raumschiff()
{
    rk = new Rettungskapsel;
    cout << "Raumschiff an Adresse " << this << " erstellt" << endl;
}

Raumschiff::~Raumschiff()
{
    cout << "Raumschiff an Adresse " << this << " gekillt" << endl;
}

void Raumschiff::setName(string inName)
{
    Name=inName;
}

string  Raumschiff::getName(void)
{
    return Name;
}

void Raumschiff::setBesatzung(int inBesatzung)
{
    Besatzung=inBesatzung;
}

int Raumschiff::getBesatzung(void)
{
    return Besatzung;
}

void Raumschiff::senden(string s)
{
    rs->empfangen(s);
}

int Raumschiff::senden(string s)
{
    cout << Name << " hat die Nachricht " << s << " emppfangen" << endl;
}


Rettungskapsel::Rettungskapsel()
{

}


void Rettungskapsel::setSerienNr(string inName)
{
    Name=inName;
}

string  Rettungskapsel::getName(void)
{
    return Name;
}

void Rettungskapsel::setBesatzung(int inBesatzung)
{
    Besatzung=inBesatzung;
}

int Rettungskapsel::getBesatzung(void)
{
    return Besatzung;
}
