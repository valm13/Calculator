#include "arit.h" // Seul cet include est necessaire pour faire du graphique
#include "GfxLib.h" // Seul cet include est necessaire pour faire du graphique
int gereclicpave(void) // a faire : directement calculer v1 et v2 dans gereclicpave(utiliser le parametre v) de meme dans les cases des touches claviers 
{	
		if((abscisseSouris()>0) && (ordonneeSouris()>hauteurFenetre()*1/7) && (abscisseSouris()<largeurFenetre()*1/4) && (ordonneeSouris()<hauteurFenetre()*2/7))
	{
		//printf("Bouton 1 appuye");
		return 1;
	}


	if((abscisseSouris()>largeurFenetre()*1/4) && (ordonneeSouris()>hauteurFenetre()*1/7) && (abscisseSouris()<largeurFenetre()*2/4) && (ordonneeSouris()<hauteurFenetre()*2/7))
	{
		//printf("Bouton 2 appuye");
		return 2;
	}


	if((abscisseSouris()>largeurFenetre()*2/4) && (ordonneeSouris()>hauteurFenetre()*1/7) && (abscisseSouris()<largeurFenetre()*3/4) && (ordonneeSouris()<hauteurFenetre()*2/7))
	{
		//printf("Bouton 3 appuye");
		return 3;
	}


	if((abscisseSouris()>0) && (ordonneeSouris()>hauteurFenetre()*2/7) && (abscisseSouris()<largeurFenetre()*1/4) && (ordonneeSouris()<hauteurFenetre()*3/7))
	{
		//printf("Bouton 4 appuye");
		return 4;
	}		


	if((abscisseSouris()>largeurFenetre()*1/4) && (ordonneeSouris()>hauteurFenetre()*2/7) && (abscisseSouris()<largeurFenetre()*2/4) && (ordonneeSouris()<hauteurFenetre()*3/7))
	{
		//printf("Bouton 5 appuye");
		return 5;
	}


	if((abscisseSouris()>largeurFenetre()*2/4) && (ordonneeSouris()>hauteurFenetre()*2/7) && (abscisseSouris()<largeurFenetre()*3/4) && (ordonneeSouris()<hauteurFenetre()*3/7))
	{
		//printf("Bouton 6 appuye");
		return 6;
	}


	if((abscisseSouris()>0) && (ordonneeSouris()>hauteurFenetre()*3/7) && (abscisseSouris()<largeurFenetre()*1/4) && (ordonneeSouris()<hauteurFenetre()*4/7))
	{
		//printf("Bouton 7 appuye");
		return 7;
	}


	if((abscisseSouris()>largeurFenetre()*1/4) && (ordonneeSouris()>hauteurFenetre()*3/7) && (abscisseSouris()<largeurFenetre()*2/4) && (ordonneeSouris()<hauteurFenetre()*4/7))
	{
		//printf("Bouton 8 appuye");
		return 8;
	}

	if((abscisseSouris()>largeurFenetre()*2/4) && (ordonneeSouris()>hauteurFenetre()*3/7) && (abscisseSouris()<largeurFenetre()*3/4) && (ordonneeSouris()<hauteurFenetre()*4/7))
	{
		//printf("Bouton 9 appuye");
		return 9;
	}

	if((abscisseSouris()>0 && (ordonneeSouris()>0) && (abscisseSouris()<largeurFenetre()*2/4) && (ordonneeSouris()<hauteurFenetre()*1/7)))
	{
		//printf("Bouton 0 appuye");
		return 0;
	}
	else
	return 11;
	
}

int geresigne(int a)
{
if((abscisseSouris()>largeurFenetre()*2/4) && (ordonneeSouris()>hauteurFenetre()*4/7) && (abscisseSouris()<largeurFenetre()*3/4) && (ordonneeSouris()<hauteurFenetre()*5/7))
		{
			a=-a;
			return a;
		}
		else return a;
}
int gereclicop(void)
{
		if((abscisseSouris()>largeurFenetre()*3/4) && (ordonneeSouris()>0) && (abscisseSouris()<largeurFenetre()) && (ordonneeSouris()<hauteurFenetre()*1/7))
		{
			return 1;
		}
		if((abscisseSouris()>largeurFenetre()*3/4) && (ordonneeSouris()>hauteurFenetre()*1/7) && (abscisseSouris()<largeurFenetre()) && (ordonneeSouris()<hauteurFenetre()*2/7))
		{
			return 2;
		}
		if((abscisseSouris()>largeurFenetre()*3/4) && (ordonneeSouris()>hauteurFenetre()*2/7) && (abscisseSouris()<largeurFenetre()) && (ordonneeSouris()<hauteurFenetre()*3/7))
		{
			return 3;
		}
		if((abscisseSouris()>largeurFenetre()*3/4) && (ordonneeSouris()>hauteurFenetre()*3/7) && (abscisseSouris()<largeurFenetre()) && (ordonneeSouris()<hauteurFenetre()*4/7))
		{
			return 4;
		}
		if((abscisseSouris()>largeurFenetre()*3/4) && (ordonneeSouris()>hauteurFenetre()*4/7) && (abscisseSouris()<largeurFenetre()) && (ordonneeSouris()<hauteurFenetre()*5/7))
		{
			return 5;
		}
		else return 0;

}
int gereoperation(int op,int v1,int v2)
{
	if(op==1)
	{
		return addition(v1,v2);
	}
	if(op==2)
	{
		return difference(v1,v2);
	}
	if(op==3)
	{
		return produit(v1,v2);
	}
	if(op==4)
	{
		return quotient(v1,v2);
	}
	if(op==5)
	{
		return modulo(v1,v2);
	}
	return 0;
}

int gerecliceg(void)
{
	if((abscisseSouris() > largeurFenetre()*2/4) && (ordonneeSouris() > 0) && (abscisseSouris() < largeurFenetre()*3/4) && (ordonneeSouris() < hauteurFenetre()*1/7))
	{
		return 1;
	}
	return 0;
}
