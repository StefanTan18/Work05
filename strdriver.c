#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystr.h"

int main() {
  
  char s1[] = "?\n?W?";
  char s2[] = "hello";
  char s3[] = "goodbye";

  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n\n", s3);
  
  printf("Testing strlen(s2):\n[standard]: %d\n[mine]: %d\n\n", strlen(s2), mystrlen(s2));

  printf("Testing strncpy(s1, s3, 3):\n[standard]: [%s]\n[mine]: [%s]\n\n", strncpy(s1, s3, 3), mystrncpy(s1, s3, 3));

  printf("Testing strcat(s1, s3):\n[standard]: [%s]\n[mine]: [%s]\n\n", strcat(s1, s3), mystrcat(s1, s3));

  printf("Testing strchr(s1, 'l'):\n[standard]: [%p]\n[mine]: [%p]\n\n", strchr(s1, 'l'), mystrchr(s1, 'l'));

  printf("Testing strchr(s1, 0):\n[standard]: [%p]\n[mine]: [%p]\n\n", strchr(s1, 0), mystrchr(s1, 0));

  printf("Testing strchr(s1, 'z'):\n[standard]: [%p]\n[mine]: [%p]\n\n", strchr(s1, 'z'), mystrchr(s1, 'z'));

  printf("Testing strcmp\n");
  printf("Comparing ab to abc:\n[standard]: [%d]\n[mine]: [%d]\n", strcmp("ab", "abc"), mystrcmp("ab", "abc"));
  printf("Comparing abc to ab:\n[standard]: [%d]\n[mine]: [%d]\n", strcmp("abc", "ab"), mystrcmp("abc", "ab"));
  printf("Comparing abc to abc:\n[standard]: [%d]\n[mine]: [%d]\n", strcmp("abc", "abc"), mystrcmp("abc", "abc"));
}
