#include <stdio.h>
#include <string.h>

int main (int argc, char* args[])
{
	char * ivan = "asdadasdsaasdasdsadasdasdasdasdasdasdadadasdasdasdasdassdaasda";
	char ivan2[256];
	long unsigned pointer = (long unsigned)(main);
	long unsigned length = 10000;
	char byte;
	
	for(long unsigned i=0; i<strlen(ivan), ++i) {
		ivan2[i] = ivan[i];
	}

	
	for (long unsigned i = pointer; i < pointer+length; i++) {
		byte = *(char*)(i);
		printf("%c", byte);
	}

	scanf("%d", &byte);
	return 0;
}
