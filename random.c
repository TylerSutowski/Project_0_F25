//
// Created by tjsut on 8/27/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(char *s, size_t size) {   //take string and size
    srand( (unsigned)time(NULL));
    for (size_t i = 0; i < size; i++) {     //iterate and put a random char in s[i]
      char rand_char = rand();
      s[i] = rand_char;
    }
    return(s);                              //return s
  }
