#include <iostream>

#include "raumschiff.hh"
#include "rettungskapsel.hh"

using namespace std;

int main()
{
    Raumschiff *s1 = new Raumschiff;
    Raumschiff *s2 = new Raumschiff;

    Rettungskapsel *rk1;
    cout << rk1 << endl;
    
    cout << s1->getRettungskapsel() << endl;
    s1->setRettungskapsel(rk1);

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

