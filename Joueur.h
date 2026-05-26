#pragma once
#include <string>
#include <vector>
#include <map>
#include "Couleurs.h"
#include "Route.h"

class Joueur
{
private:
	const std::string nom;
	unsigned int nombre_autobus;
	std::map<Couleurs, int> cartesTransport;
	std::vector<CarteDestination*> cartesDestination;
	int points;
	std::vector<Route*> routesPossedees;
public:
	Joueur(const std::string& nom);
	void piocherTransport();
	void prendreRoute(Route*);
	void piocherDestination();
	void verifierDrapeau();
};

