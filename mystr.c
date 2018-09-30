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
  int len = strlen(*dest);
  for (i = 0; i < strlen(*source); i++)
    dest[len + i] = str[i];
  dest[len + str(*source)] = '\0';
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
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
  
char * mystrchr( char *s, char c ) {
  for (i = 0; i < strlen(*s); i++) {
    if (char[i] == c){
      return &char[i];
    }
  }
  return NULL;
}
  
