#include <stdio.h>
#include "mystr.h"

char * strncpy( char *dest, char *source, int n ){
	for (int i = 0; i < n && source[i]; i++){
		dest[i] = source[i];
	}
	return dest;
}
