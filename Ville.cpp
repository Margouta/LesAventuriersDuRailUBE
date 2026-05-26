#include "Ville.h"

Ville::Ville(const std::string& nom_)
	:nom(nom_)
{

}

const std::string& Ville::getNom() const
{
	return nom;
}

void Ville::lier(Ville& ville, const unsigned int taille)

{
	liens[&ville] = taille;
}


void Ville::display() const
{
	std::cout << "La ville est reliee a : " << std::endl;
	for (auto chemin : liens)
	{
		std::cout << chemin.first->getNom() << ", par un chemin de " << chemin.second << " paves" << std::endl;
	}
}