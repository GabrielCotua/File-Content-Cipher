#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define FLUSH while(getchar()!='\n');
#define BUFF_SIZE 1024

typedef struct fileInfo {

	char * filename;
	char * flag;
	int offset;

} fileInfo;

int WriteFile(fileInfo fileInfo);
int ReadContent(fileInfo fileInfo);
int MessageCypher(fileInfo fileInfo, int offset, char content[BUFF_SIZE]);
int MessageDecypher(fileInfo fileInfo, int  offset, char content[BUFF_SIZE]);


int main(int numArgs, char ** args) {
	// printf("%c", args[1][0]);

	if (numArgs != 3) { // Making sure that the parameters are right

		if (args[1][0] != '-' ){ // Looking for the flag in the first argument
			puts("No flag provided.\n");
			return -1;

		} else if (numArgs < 3) {
			puts("Not enough arguments.\n");
			return -1;

		} else if (numArgs > 3){
			puts("Too many arguments.\n");
			return -1;

		} else if (strcmp(args[2],"\0")) {
			puts("No filename given.\n");
			return -1;

		} else {
			puts("\n");
		}
	}

	// Filling file basic information and assigning memory from heap
	fileInfo fileInfo;
	fileInfo.filename = malloc(sizeof(strlen(args[2]) + 1));
	fileInfo.filename = args[2];
	fileInfo.flag = malloc(sizeof(strlen(args[1]) + 1));
	fileInfo.flag = args[1];

	//should be entered by user instead of being hardcoded
	fileInfo.offset = 2;

	// printf("Filename-Content: %s\nFilename-Size: %ld\n", fileInfo.filename, sizeof(fileInfo.filename));
	// printf("flag-content: %s\nflag-size: %ld\n", fileInfo.flag, sizeof(fileInfo.flag));

	free(fileInfo.filename);
	free(fileInfo.flag);
	return 0;
}

int WriteFile(fileInfo fileInfo) {

	return 0;
}

int ReadContent(fileInfo fileInfo) {
	char buffer[BUFF_SIZE];
	int blocks = 0;

	FILE * fp = fopen(fileInfo.filename, "r");
	if (!fp) {
    puts("Error opening the file. File does not exist.\n");
	fclose(fp);

	return -1;
	}

	while  (fread(buffer,BUFF_SIZE-1,1,fp)) {
		blocks++;
		if (!fgets(buffer, BUFF_SIZE-1, fp)) {

			return  -1;
		}
		MessageCypher(fileInfo, fileInfo.offset, buffer);
	}

	return 0;
}

int MessageCypher(fileInfo fileInfo, int offset, char content[BUFF_SIZE]){
	char new_content[BUFF_SIZE];


	return new_content;
}

int MessageDecypher(fileInfo fileInfo, int  offset, char content[BUFF_SIZE]) {
	char new_content[BUFF_SIZE];

	return new_content;
}
