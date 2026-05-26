#include "CarteDestination.h"


CarteDestination::CarteDestination(Ville* VilleA, Ville* VilleB, int valeur, CarteDestination* suivant, CarteDestination* precedent)
	: villeA(VilleA), villeB(VilleB), valeur(valeur), suivant(suivant), precedent(precedent)
{

}
int CarteDestination::getValeur()
{
	return valeur;
}
Ville* CarteDestination::getVilleA()
{
	return villeA;
}
Ville* CarteDestination::getVilleB()
{
	return villeB;
}
CarteDestination* CarteDestination::getSuivant()
{
	return suivant;
}
CarteDestination* CarteDestination::getPrecedent()
{
	return precedent;
}
void CarteDestination::setSuivant(CarteDestination* suivantptr)
{
	suivant = suivantptr;
}
void CarteDestination::setPrecedent(CarteDestination* suivantptr)
{
	precedent = precedentptr;
}