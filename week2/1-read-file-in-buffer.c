#include <stdio.h> 
 
int ae_load_file_to_memory(const char *filename, char **result) 
{ 
	int size = 0;
	FILE *f = fopen(filename, "rb");
	if (f == NULL) 
	{ 
		*result = NULL;
		return -1; // -1 means file opening fail 
	} 
	fseek(f, 0, SEEK_END);
	size = ftell(f);
	fseek(f, 0, SEEK_SET);
	*result = (char *)malloc(size+1);
	if (size != fread(*result, sizeof(char), size, f)) 
	{ 
		free(*result);
		return -2; // -2 means file reading fail 
	} 
	fclose(f);
	(*result)[size] = 0;
	return size;
}

// function ae_load_file_to_memory (see code above) is pasted here  
 
int main() 
{ 
	char *content; 
	int size;
	size = ae_load_file_to_memory("text.txt", &content);
	if (size < 0) 
	{ 
		puts("Error loading file");
		return 1;
	} 
	do { 
		putchar(content[size-1]);
		size--;
	} 
	while(size > 0);
	return 0;
}
