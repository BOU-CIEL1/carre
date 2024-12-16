#include "carre.h"
#include <iostream>
using namespace std;

int main()
{
	CCarre carre;
	carre.Setsx(8);
	carre.Setsy(8);
	carre.Setcote(15);
	carre.Afficher();
	cout << carre.Getsx() << " de longueur " << carre.Getsy() << " de largeur "<< carre.GetCote() << " pixels de cote " << endl;
}