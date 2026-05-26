#pragma once
#include <iostream>
#include <map>
#include <string>
class Ville
{
private:
	std::string nom;
	std::map<Ville*, Route*> routes;


public:
	Ville(const std::string& nom);

	const std::string& getNom() const;

	void lier(Ville& ville, const unsigned int taille);
};
