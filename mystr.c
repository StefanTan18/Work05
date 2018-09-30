#include <stdlib.h>

int mystrlen( char * str ) {
  int i = 0;
  while (* str ) {
    str++;
    i++;
  }
  return i;
}

char * mystrncpy( char *dest, char *source, int n ){
  for (int i = 0; i < n && source[i]; i++){
    dest[i] = source[i];
  }
  return dest;
}

char * mystrcat( char *dest, char *source ) {
  int len = mystrlen(dest);
  for (int i = 0; i < mystrlen(source); i++)
    dest[len + i] = source[i];
  dest[len + mystrlen(source)] = '\0';
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int len1 = mystrlen( s1); 
  int len2 = mystrlen( s2);
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
  
char * mystrchr( char *s, char c ) {
  for (int i = 0; i < mystrlen(s); i++) {
    if (s[i] == c){
      return &s[i];
    }
  }
  return NULL;
}
  
