#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
void affichepave(void)
{

									// Boutons
	couleurCourante(180,180,180);
	rectangle(0,hauteurFenetre()*1/7,largeurFenetre()*1/4,hauteurFenetre()*2/7);//1
	rectangle(largeurFenetre()*1/4,hauteurFenetre()*1/7,largeurFenetre()*2/4,hauteurFenetre()*2/7);//2
	rectangle(largeurFenetre()*2/4,hauteurFenetre()*1/7,largeurFenetre()*3/4,hauteurFenetre()*2/7);//3
	rectangle(0,hauteurFenetre()*2/7,largeurFenetre()*1/4,hauteurFenetre()*3/7);//4
	rectangle(largeurFenetre()*1/4,hauteurFenetre()*2/7,largeurFenetre()*2/4,hauteurFenetre()*3/7);//5
	rectangle(largeurFenetre()*2/4,hauteurFenetre()*2/7,largeurFenetre()*3/4,hauteurFenetre()*3/7);//6
	rectangle(0,hauteurFenetre()*3/7,largeurFenetre()*1/4,hauteurFenetre()*4/7);//7
	rectangle(largeurFenetre()*1/4,hauteurFenetre()*3/7,largeurFenetre()*2/4,hauteurFenetre()*4/7);//8
	rectangle(largeurFenetre()*2/4,hauteurFenetre()*3/7,largeurFenetre()*3/4,hauteurFenetre()*4/7);//9
	rectangle(0,0,largeurFenetre()*2/4,hauteurFenetre()*1/7);//0
	couleurCourante(255,102,0);
	rectangle(largeurFenetre()*3/4,0,largeurFenetre(),hauteurFenetre()*1/7);//   +
	rectangle(largeurFenetre()*3/4,hauteurFenetre()*1/7,largeurFenetre(),hauteurFenetre()*2/7);//   -
	rectangle(largeurFenetre()*3/4,hauteurFenetre()*2/7,largeurFenetre(),hauteurFenetre()*3/7);//   *
	rectangle(largeurFenetre()*3/4,hauteurFenetre()*3/7,largeurFenetre(),hauteurFenetre()*4/7);//   /
	
	rectangle(largeurFenetre()*3/4,hauteurFenetre()*4/7,largeurFenetre(),hauteurFenetre()*5/7);//   %
	
	rectangle(largeurFenetre()*2/4,hauteurFenetre()*4/7,largeurFenetre()*3/4,hauteurFenetre()*5/7);// Signe
	rectangle(largeurFenetre()*1/4,hauteurFenetre()*4/7,largeurFenetre()*2/4,hauteurFenetre()*5/7);//   AC
	couleurCourante(157,0,157);
	rectangle(0,hauteurFenetre()*4/7,largeurFenetre()*1/4,hauteurFenetre()*5/7);//   Nom Prénom
	couleurCourante(0,210,100);
	rectangle(largeurFenetre()*2/4,0,largeurFenetre()*3/4,hauteurFenetre()*1/7);//   =



							// Lignes
	epaisseurDeTrait(2);
	couleurCourante(0,0,0);
	ligne(0,hauteurFenetre()*1/7,largeurFenetre(),hauteurFenetre()*1/7); 
	ligne(0,hauteurFenetre()*2/7,largeurFenetre(),hauteurFenetre()*2/7);
	ligne(0,hauteurFenetre()*3/7,largeurFenetre(),hauteurFenetre()*3/7);
	ligne(0,hauteurFenetre()*4/7,largeurFenetre(),hauteurFenetre()*4/7);
	ligne(0,hauteurFenetre()*5/7,largeurFenetre(),hauteurFenetre()*5/7);
	ligne(largeurFenetre()*1/4,hauteurFenetre()*5/7,largeurFenetre()*1/4,hauteurFenetre()*1/7);
	ligne(largeurFenetre()*2/4,hauteurFenetre()*5/7,largeurFenetre()*2/4,0);
	ligne(largeurFenetre()*3/4,hauteurFenetre()*5/7,largeurFenetre()*3/4,0);

							// Textes

	couleurCourante(0,0,0);
	afficheChaine("1",12,largeurFenetre()*1/8,hauteurFenetre()*3/14);
	afficheChaine("2",12,largeurFenetre()*3/8,hauteurFenetre()*3/14);
	afficheChaine("3",12,largeurFenetre()*5/8,hauteurFenetre()*3/14);
	afficheChaine("4",12,largeurFenetre()*1/8,hauteurFenetre()*5/14);
	afficheChaine("5",12,largeurFenetre()*3/8,hauteurFenetre()*5/14);
	afficheChaine("6",12,largeurFenetre()*5/8,hauteurFenetre()*5/14);
	afficheChaine("7",12,largeurFenetre()*1/8,hauteurFenetre()*7/14);
	afficheChaine("8",12,largeurFenetre()*3/8,hauteurFenetre()*7/14);
	afficheChaine("9",12,largeurFenetre()*5/8,hauteurFenetre()*7/14);
	afficheChaine("0",12,largeurFenetre()*2/8,hauteurFenetre()*1/14);
	
	afficheChaine("=",12,largeurFenetre()*5/8,hauteurFenetre()*1/14);
	afficheChaine("+",12,largeurFenetre()*7/8,hauteurFenetre()*1/14);
	afficheChaine("-",12,largeurFenetre()*7/8,hauteurFenetre()*3/14);
	afficheChaine("x",12,largeurFenetre()*7/8,hauteurFenetre()*5/14);
	afficheChaine("/",12,largeurFenetre()*7/8,hauteurFenetre()*7/14);
	afficheChaine("%",12,largeurFenetre()*7/8,hauteurFenetre()*9/14);
	afficheChaine("AC",12,largeurFenetre()*23/64,hauteurFenetre()*9/14);
	
	afficheChaine("Valentin Magnan",12,largeurFenetre()*1/64,hauteurFenetre()*9/14);
	afficheChaine("CIR1 2016",12,largeurFenetre()*4/64,hauteurFenetre()*17/28);

	
	afficheChaine("+ / -",12,largeurFenetre()*9/16,hauteurFenetre()*9/14);	
}
void affichesaisie(int v)
{
	static char valeur[10];
	sprintf(valeur,"%d",v);
	couleurCourante(30,30,30);
	rectangle(0,hauteurFenetre()*5/7,largeurFenetre(),hauteurFenetre());
	couleurCourante(255,255,255);
	afficheChaine(valeur,15,largeurFenetre()*2/4,hauteurFenetre()*6/7);
}
