#pragma once
#include "Ville.h"

class CarteDestination
{
private:
	Ville* villeA;
	Ville* villeB;
	int valeur;
	CarteDestination* suivant;
	CarteDestination* precedent;
public:
	CarteDestination(Ville* VilleA, Ville* VilleB, int valeur, CarteDestination* suivant, CarteDestination* precedent);
	int getValeur();
	Ville* getVilleA();
	Ville* getVilleB();
	CarteDestination* getSuivant();
	CarteDestination* getPrecedent();
	void setSuivant(CarteDestination*);
	void setPrecedent(CarteDestination*);
};