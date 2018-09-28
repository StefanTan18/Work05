int strlen( char * str ) {
  int i = 0;
  while (* str ) {
    str++;
    i++;
  }
  return i;
}

char * strcat( char *dest, char *source ) {
  int len = strlen(*dest);
  for (i = 0; i < strlen(*source); i++)
    dest[len + i] = str[i];
  dest[len + str(*source)] = '\0';
  return dest;
}
  
