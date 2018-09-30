#include <stdio.h>
#include "mystr.h"

char * strncpy( char *dest, char *source, int n ){
	for (int i = 0; i < n && source[i]; i++){
		dest[i] = source[i];
	}
	return dest;
}

int strcmp( char *s1, char *s2 ){
	int len1 = strlen( *s1); 
	int len2 = strlen( *s2);
	int n;
	if (len1 > len2){
		n = len1;
	}
	else{
		n = len2;
	}
	for (int i = 0; i < n; i++){
		if (s1[i] > s2[i]){
			return 1;
		}
		if (s1[i] < s2[i]){
			return -1;
		}
	return 0;
	}

}
