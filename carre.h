#pragma once
/// @file carre.h
/// @brief Programme principal du TP: un carr�
/// @details Ce programme utilise des fonctions
/// @author Jalil Bougoffa
/// @version 0.1 - Visual Studio 2019
/// @date 21/12/2024

/// @brief Classe du carr�
class CCarre
{
    /// @brief variables pour visualiser les axes x et y et le cot�
    int sx;
	int sy;
	int cote;
public:
//Fonction: Affecte la valeur de sx1 � sx
//Param�tres en entr�e: sx1
//Param�tres en sortie: Aucun
//Valeur de retour: Aucun
void Setsx(int sx1);
//Fonction: Affecte la valeur de sy1 � sy
//Param�tres en entr�e: sy1
//Param�tres en sortie: Aucun
//Valeur de retour: Aucun
void Setsy(int sy1);
//Fonction: Affecte la valeur de cote1 � cote
//Param�tres en entr�e: cote1
//Param�tres en sortie: Aucun
//Valeur de retour: Aucun
void Setcote(int cote1);
//Fonction: Affiche les caract�ristiques du carr�
//Param�tres en entr�e: Aucun
//Param�tres en sortie: Aucun
//Valeur de retour: Aucun
void Afficher();
//Fonction: Retourne sx
//Param�tres en entr�e: Aucun
//Param�tres en sortie: Aucun
//Valeur de retour: sx
int Getsx();
//Fonction: Retourne sy
//Param�tres en entr�e: Aucun
//Param�tres en sortie: Aucun
//Valeur de retour: sy
int Getsy();
//Fonction: Retourne la cote
//Param�tres en entr�e: Aucun
//Param�tres en sortie: Aucun
//Valeur de retour: cote
int GetCote();
// "D�place" le carr� sans le dessiner. Les attributs x et y  
    // sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entr�es : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de d�placement du carr� 
    // Sortie : Aucune 
void Deplacer(char direction, int saut);
};