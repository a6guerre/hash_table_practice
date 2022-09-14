#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct wordData {
  char word[MAX_WORD_SIZE];
  uint32_t counts[NUM_OF_DECADES];
  uint32_t hashValue;
}wordData;


void createWordData(wordData_t * wordData, const char *wordStr, 
		    uint32_t decade, uint32_t count);
