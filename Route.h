#pragma once
#include "Joueur.h"
class Route
{
private:
	int taille;
	Joueur* proprietaire;
	Couleurs couleur;
	bool estDouble;
	Route* routeSecondaire;

public:
	Route(int t, Couleurs c, bool d, Route* s);
	Route(int t, Couleurs c, bool d);

	const Joueur* getProprietaire() const;
	void setproprietaire(Joueur* j);

};
