#include "carre.h"
#include <iostream>
using namespace std;

/// @brief Fonction qui attribue la valeur sx1 à sx
/// @param[in] int sx1
/// @param[out] Aucun
/// @return Aucun
void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

/// @brief Fonction qui attribue la valeur sy1 à sy
/// @param[in] int sy1
/// @param[out] Aucun
/// @return Aucun
void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

/// @brief Fonction qui attribue la valeur cote1 à cote
/// @param[in] int cote1
/// @param[out] Aucun
/// @return Aucun
void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

/// @brief Fonction qui affiche les caractéristiques du carré
/// @param[in] Aucun
/// @param[out] Aucun
/// @return Aucun
void CCarre::Afficher()
{
	cout << sx << " pixels de longueur " << sy << " pixels de largeur " << cote << " pixels de cote " << endl;
}
/// @brief Retourne sx
/// @param[in] Aucun
/// @param[out] Aucun
/// @return sx
int CCarre::Getsx()
{
	return sx;
}

/// @brief Retourne sy
/// @param[in] Aucun
/// @param[out] Aucun
/// @return sy
int CCarre::Getsy()
{
	return sy;
}

/// @brief Retourne cote
/// @param[in] Aucun
/// @param[out] Aucun
/// @return cote
int CCarre::GetCote()
{
	return cote;
}
/// @brief Déplace le carré
/// @param[in] int direction, int saut
/// @param[out] Aucun
/// @return Aucun
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
