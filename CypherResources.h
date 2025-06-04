#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define flush while(getchar()!='\n');

typedef struct fileInfo {

	char * filename;
	char * flag;
	char * content;
	char * encryptedContent;


} fileInfo;

int WriteFile(FILE * fp, fileInfo fileInfo);
char * ReadFile(FILE * fp, fileInfo fileInfo);
char * MessageCypher(fileInfo fileInfo);
char * MessageDecypher(fileInfo fileInfo);
