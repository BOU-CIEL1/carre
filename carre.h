#pragma once
class CCarre
{
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