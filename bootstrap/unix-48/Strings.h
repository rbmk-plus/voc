/* voc 1.95 [2016/11/12]. Bootstrapping compiler for address size 8, alignment 8. xtspaSfF */

#ifndef Strings__h
#define Strings__h

#include "SYSTEM.h"




import void Strings_Append (CHAR *extra, LONGINT extra__len, CHAR *dest, LONGINT dest__len);
import void Strings_Cap (CHAR *s, LONGINT s__len);
import void Strings_Delete (CHAR *s, LONGINT s__len, INT16 pos, INT16 n);
import void Strings_Extract (CHAR *source, LONGINT source__len, INT16 pos, INT16 n, CHAR *dest, LONGINT dest__len);
import void Strings_Insert (CHAR *source, LONGINT source__len, INT16 pos, CHAR *dest, LONGINT dest__len);
import INT16 Strings_Length (CHAR *s, LONGINT s__len);
import BOOLEAN Strings_Match (CHAR *string, LONGINT string__len, CHAR *pattern, LONGINT pattern__len);
import INT16 Strings_Pos (CHAR *pattern, LONGINT pattern__len, CHAR *s, LONGINT s__len, INT16 pos);
import void Strings_Replace (CHAR *source, LONGINT source__len, INT16 pos, CHAR *dest, LONGINT dest__len);
import void *Strings__init(void);


#endif // Strings
