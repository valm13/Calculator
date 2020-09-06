#include "arit.h"
int addition(int a,int b)
{
	return a+b;
}

int difference(int a,int b)
{
	return a-b;
}

int produit(int a,int b)
{
	int i,c;
	// A CHANGER QUAND UN DES NOMBRES = -X.
	if(a<0 || b<0)
	{
		if(a<0)
		{
			a=-a;
		}
		else if(b<0)
		{
			b=-b;
		}
		
		for(i=0;i<b;i++)
		{
			c=c+a;
		}
		return -c;
	}
	else
	{
		for(i=0;i<b;i++)
		{
			c=c+a;
		}
		return c;
	}
}


int quotient(int a,int b)
{
	int i=0;
	if(a<0 || b<0)
	{
		if(a<0)
		{
			a=-a;
		}
		else if(b<0)
		{
			b=-b;
		}
		
		while(a>=b)
		{
		a=a-b;
		i++;
		}
		return -i;
	}
	else
	{
		while(a>=b)
		{
		a=a-b;
		i++;
		}
		return i;
	}
	
}
int modulo(int a,int b)
{
		if(a<0 || b<0)
	{
		if(a<0)
		{
			a=-a;
		}
		else if(b<0)
		{
			b=-b;
		}
		
		while(a>b)
		{
		a=a-b;
		}
		return -a;
	}
	else
	{
	
	while(a>b)
	{
	a=a-b;
	}
	return a;
	}

}
