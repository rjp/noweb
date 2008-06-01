#line 6 "strsave.nw"
static char rcsid[] = "$Id: strsave.nw,v 2.14 2002/07/17 22:47:34 nr Exp nr $";
static char rcsname[] = "$Name: v2_10c $";
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "strsave.h"
#include "errors.h"

char *strsave (char *s) {
    char *t = malloc (strlen(s)+1);
    checkptr(t);
    strcpy(t,s);
    return t;
}
