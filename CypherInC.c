#include "CypherResources.h"

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

	// Filling file basic information
	fileInfo fileInfo;
	fileInfo.filename = malloc(sizeof(strlen(args[2]) + 1));
	fileInfo.filename = args[2];
	fileInfo.flag = malloc(sizeof(strlen(args[1]) + 1));
	fileInfo.flag = args[1];
	// printf("Filename-Content: %s\nFilename-Size: %ld\n", fileInfo.filename, sizeof(fileInfo.filename));
	// printf("flag-content: %s\nflag-size: %ld\n", fileInfo.flag, sizeof(fileInfo.flag));


	// exit(1); // testing concept
	FILE * fp = fopen(fileInfo.filename, "r");

	if (!fp) {
		puts("Error opening the file...Exiting");
		fclose(fp);

		return -1;
	}
	// ReadFile(fp, fileInfo);



	return 0;
}

int readFile(FILE * fp, fileInfo * fileInfo) {

	fp = fopen(fileInfo.filename, "r");
	fread(fileInfo.content)

	return 0;
}

int WriteFile(FILE * fp, fileInfo fileInfo) {

	return 0;
}