#include "main.h"
/**
*set_string - sets the value of a pointer to a char
*@s: parameter
*@to: parameter
*/
void set_string(char **s, char *to)
{
*s = &*to;
}
