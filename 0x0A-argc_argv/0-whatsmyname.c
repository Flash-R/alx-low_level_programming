#include <stdio.h>
/**
 * main() - print the file name
 * @argc - number of command line arguments
 * @argv - vector of the arguments in char* (Strings)
 * return - 1 or 0
 */
int main(int argc, char *argv[]){
	int i;
	for(i = 0; i < argc; i++){
		printf("%s\n",argv[i]);
	}
	return 0;
}
