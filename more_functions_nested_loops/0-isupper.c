#include "main.h"
/**
* _isupper - verifie la presence d'un caracteÃre ¨majusce
*@c: caratere verifier
* Return: 1 si majuscule et sinon 0
*/
int _isupper(int c)
{
		if (c >= 65 && c <= 90)
		{
		return 1;
		}
	return 0;
}

