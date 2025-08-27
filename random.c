//
// Created by tjsut on 8/27/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(char *s, size_t size) {
    srand( (unsigned)time(NULL) );
    char random_char;
    size_t i;
    for (i = 0; i < size; i++) {
      random_char = rand();
      s[i] = random_char;
    }
    return(s);
  }
