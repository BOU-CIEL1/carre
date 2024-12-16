#include "carre.h"
#include <iostream>
using namespace std;

void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

void CCarre::Afficher()
{
	cout << sx << " pixels de longueur " << sy << " pixels de largeur " << cote << " pixels de cote " << endl;
}

int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{

	const char nord = 'N';
	const char sud = 'S';
	const char est = 'E';
	const char ouest = 'O';
	
	cout << "Entrez une direction (N pour nord, S pour sud, E pour est, O pour ouest)" << endl;
	cin >> direction;
	cout << "Entrez un nombre de sauts" << endl;
	cin >> saut;
	if (direction == 'N')
	{
		sy -= saut;
	}
	else if (direction == 'S')
	{
		sy += saut;
	}
	else if (direction == 'O')
	{
		sx -= saut;
	}
	else if (direction == 'E')
	{
		sx += saut;
	}
	else
	{
		cout << "Direction invalide!!!" << endl;
	}
}
