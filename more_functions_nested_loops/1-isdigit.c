#include <ctype.h>
#include "main.h"
/**
* imprimer les chiffre compris ente 0 et 9
* return 1 si vrai sinon return 0
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)

return (1);

return (0);
}
