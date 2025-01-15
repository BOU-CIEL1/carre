#pragma once
/// @file carre.h
/// @brief Programme principal du TP: un carré
/// @details Ce programme utilise des fonctions
/// @author Jalil Bougoffa
/// @version 0.1 - Visual Studio 2019
/// @date 21/12/2024

/// @brief Classe du carré
class CCarre
{
    /// @brief variables pour visualiser les axes x et y et le coté
    int sx;
	int sy;
	int cote;
public:
//Fonction: Affecte la valeur de sx1 à sx
//Paramètres en entrée: sx1
//Paramètres en sortie: Aucun
//Valeur de retour: Aucun
void Setsx(int sx1);
//Fonction: Affecte la valeur de sy1 à sy
//Paramètres en entrée: sy1
//Paramètres en sortie: Aucun
//Valeur de retour: Aucun
void Setsy(int sy1);
//Fonction: Affecte la valeur de cote1 à cote
//Paramètres en entrée: cote1
//Paramètres en sortie: Aucun
//Valeur de retour: Aucun
void Setcote(int cote1);
//Fonction: Affiche les caractéristiques du carré
//Paramètres en entrée: Aucun
//Paramètres en sortie: Aucun
//Valeur de retour: Aucun
void Afficher();
//Fonction: Retourne sx
//Paramètres en entrée: Aucun
//Paramètres en sortie: Aucun
//Valeur de retour: sx
int Getsx();
//Fonction: Retourne sy
//Paramètres en entrée: Aucun
//Paramètres en sortie: Aucun
//Valeur de retour: sy
int Getsy();
//Fonction: Retourne la cote
//Paramètres en entrée: Aucun
//Paramètres en sortie: Aucun
//Valeur de retour: cote
int GetCote();
// "Déplace" le carré sans le dessiner. Les attributs x et y  
    // sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entrées : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de déplacement du carré 
    // Sortie : Aucune 
void Deplacer(char direction, int saut);
};