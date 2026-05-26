#pragma once
#include <iostream>
#include <map>
#include <string>
class Ville
{
private:
	std::string nom;
	std::map<Ville*, int> liens;


public:
	Ville(const std::string& nom_);

	const std::string& getNom() const;

	void lier(Ville& ville, const unsigned int taille);

	void display() const;
};

