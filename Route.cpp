#include "Route.h"

Route::Route(int t, Couleurs c, bool d, Route* s)
	:taille(t), couleur(c), estDouble(d), routeSecondaire(s)
{

}


Route::Route(int t, Couleurs c, bool d)
	:taille(t), couleur(c), estDouble(d)
{

}



const Joueur* Route::getProprietaire() const
{
	return proprietaire;
}




void Route::setproprietaire(Joueur* j)
{
	proprietaire = j;
}

