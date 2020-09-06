#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "ESLib.h" // Pour utiliser valeurAleatoire()
#include "gerepave.h"
#include "gereaffichage.h"

// Largeur et hauteur par defaut d'une image correspondant a nos criteres
#define LargeurFenetre 450
#define HauteurFenetre 600
void gestionEvenement(EvenementGfx evenement);


int main(int argc, char **argv)
{
	initialiseGfx(argc, argv);
	
	prepareFenetreGraphique("GfxLib", LargeurFenetre, HauteurFenetre);
	
	/* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
		qui elle-meme utilise fonctionAffichage ci-dessous */
	lanceBoucleEvenements();
		
	return 0;
}


/* La fonction de gestion des evenements, appelee automatiquement par le systeme
des qu'une evenement survient */
void gestionEvenement(EvenementGfx evenement)
{
	static bool pleinEcran = false;
	static int a = 0;// a et b servent au calcul de v1 et v2
	static int b = 0;
	static int v = 0; // variable d'affichage
	static int v1 = 0;//Nombre 1
	static int v2 = 0;//Nombre 2
	static int eg = 0;//Si eg=1 alors celà veut dire que l'on a cliqué sur le bouton égal
	static int op = 0;//Si op=1 alors celà veut dire que l'on a cliqué sur un des boutons d'opération
	static int r = 0; //resultat final
	switch (evenement)
	{
		case Initialisation:
			demandeTemporisation(20);
			break;
		
		case Temporisation:
			rafraichisFenetre();
			break;
					
			
		case Affichage:
			effaceFenetre(255,255,255);
			affichepave();
			affichesaisie(v);
			break;
		
		case Clavier:
			printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());

			switch (caractereClavier())
			{
				case 'Q': /* Pour sortir quelque peu proprement du programme */
				case 'q':
					termineBoucleEvenements();
					break;

				case 'F':
				case 'f':
					pleinEcran = !pleinEcran; // Changement de mode plein ecran
					if (pleinEcran)
						modePleinEcran();
					else
						redimensionneFenetre(LargeurFenetre, HauteurFenetre);
					break;

				case 'R':
				case 'r':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 20 millisecondes (rapide)
					demandeTemporisation(20);
					break;

				case 'L':
				case 'l':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 100 millisecondes (lent)
					demandeTemporisation(100);
					break;

				case 'S':
				case 's':
					// Configure le systeme pour ne plus generer de message Temporisation
					demandeTemporisation(-1);
					break;			
				case '1':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+1;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+1;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '2':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+2;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+2;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '3':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+3;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+3;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '4':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+4;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+4;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '5':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+5;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+5;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '6':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+6;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+6;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '7':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+7;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+7;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '8':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+8;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+8;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '9':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+9;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+9;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;
				case '0':
			if(op==0)
			{

				v1=geresigne(v1);
				v=v1;
					v1=(v1*10)+0;
					v=v1;
					printf("v1 = %d\n",v1);
			}
						
			if(eg == 0 && op >= 1)
			{
				v2=geresigne(v2);
				v=v2;
				v2=(v2*10)+0;
				v=v2;
				printf("v2 = %d\n",v2);

			}
			break;

				case '+':
			op=1;
			break;
				case '-':
			op=2;
			break;
				case '*':
			op=3;
			break;
				case '/':
			op=4;
			break;
				case '=':
			r=gereoperation(op,v1,v2);
			v=r;
			op=0;
			eg=0;
			v1=0;
			v2=0;
			break;
					
			}
			break;
			
		case ClavierSpecial:
			printf("ASCII %d\n", toucheClavier());
			break;


		case BoutonSouris:
		if (etatBoutonSouris() == GaucheRelache)
		{
			if((abscisseSouris()>largeurFenetre()*1/4) && (ordonneeSouris()>hauteurFenetre()*4/7) && (abscisseSouris()<largeurFenetre()*2/4) && (ordonneeSouris()<hauteurFenetre()*5/7))
			{
					op=0;
					eg=0;
					v1=0;
					v2=0;
			}
			
			if(op==0)
			{
				a=gereclicpave();
				op=gereclicop();
				v1=geresigne(v1);
				v=v1;
				if(a>=0 && a<=9)
				{
					v1=(v1*10)+a;
					v=v1;
					printf("v1 = %d\n",v1);
				}
			}	
			
			if(eg == 0 && op >= 1)
			{
				b=gereclicpave();
				eg=gerecliceg();
				v2=geresigne(v2);
				v=v2;
				if(b>=0 && b<=9)
				{
					v2=(v2*10)+b;
					v=v2;
					printf("v2 = %d\n",v2);
				}
			}
			if(eg==1){
					r=gereoperation(op,v1,v2);
					v=r;
					op=0;
					eg=0;
					v1=0;
					v2=0;
			}
		}
		break;

		case Souris: // Si la souris est deplacee
			break;
		
		case Inactivite: // Quand aucun message n'est disponible
			break;
		
		case Redimensionnement: 
			printf("Largeur : %d\t", largeurFenetre());
			printf("Hauteur : %d\n", hauteurFenetre());
			break;
	}
}
