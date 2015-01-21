/**
* \file end_game.c
* \brief Page permettant de verifier la fin de jeu
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

/**
*\fn void victoire(void)
*\brief Fonction permettant d'afficher le joueur gagnant
*/
void victoire(void){
	nb_tour = nb_tour - 1;
	nb_tour = nb_tour % 2;
	
	if (nb_tour == 0) printf("Félicitation au joueur 1 pour avoir remporté la partie !");
	
	else printf("Félicitation au joueur 2 pour avoir remporté la partie !");
}

/**
*\fn int fin_jeu(void)
*\brief Fonction permettant de verifier si la partie est fini
*/
int fin_jeu(void){
	verif_colonnes();
	verif_lignes();
	verif_diagonales();
}

int verif_colonnes(void){
	
}
