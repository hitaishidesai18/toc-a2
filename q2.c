
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_TOKENS (1000000)
#define MAX_LINE_LENGTH (1000000)
#define EXIT_SUCCESS 0

//char tokens[MAX_TOKENS];
int num_tokens;
int position = 0;
char variable_names[MAX_TOKENS][100];
int variable_values[MAX_TOKENS];
int variables_initialized[MAX_TOKENS] = {0};

/**
Reads the passed input file line by line.
Removes all space type characters from the lines, including \n (Carriage Return). 
Modifies the global tokens and num_tokens variables. 
*/

/*
void tokenize(char* filename) {

    FILE* in_file = fopen(filename, "r");

    char line[MAX_TOKENS];
    while (fgets(line, MAX_LINE_LENGTH, in_file)) {
        for (int i = 0; i < strlen(line); ++i) {
            if (line[i] == ' ' || line[i] == '\t' || line[i] == 10/ || line[i] == '\n') continue;

            tokens[num_tokens] = line[i];
            num_tokens++;
        }
    }
}

int main(int argc, char** argv) {

    if (argc < 2) {
        perror("Pass the name of the input file as the first parameter. e.g.: ./simulator input.txt");
        exit(EXIT_FAILURE);
    }

    tokenize(argv[1]);

    return EXIT_SUCCESS;
} */

int main(){

	checkDeclaration("pintA,Bat,C,data;");
	for(int i = 0; i<4; i++){
		printf("%s ", variable_names[i]);
	}
	
}
void error(){
	printf("Invalid Program");
}

void compile(){
	
}

int checkDeclaration(char input[]){
	int pos = 0;
	if(input[pos]=='i' && input[++pos] == 'n' && input[++pos] == 't'){
		pos++;

		while(input[pos]!=';'){
			char var[100];
			int i = 0;
			while(input[pos]!=','){
				if(input[pos]==';')
					break;
				var[i] = input[pos];
				pos++;
				i++;
			}
			memcpy(variable_names[position], var, i);
			position++;
			if(input[pos]!=';') pos++;
		}
	}
	else
	error();
}
