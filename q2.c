
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_TOKENS (1000000)
#define MAX_LINE_LENGTH (1000000)
#define EXIT_SUCCESS 0

//char tokens[MAX_TOKENS];
int num_tokens;
int pos = 0;
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
	//int position = pos;
	//if(tokens[pos++]=='r'&&tokens[pos++]=='e'&&tokens[pos++]=='a'&&tokens[pos++]=='d'
	
	
}
void error(){
	printf("Invalid Program");
}

void compile(){
	
}

int checkDeclaration(){
	//int pos = 0;
	if(tokens[pos]=='i' && tokens[++pos] == 'n' && tokens[++pos] == 't'){
		pos++;

		while(tokens[pos]!=';'){
			char var[100];
			int i = 0;
			while(tokens[pos]!=','){
				if(tokens[pos]==';')
					break;
				var[i] = tokens[pos];
				pos++;
				i++;
			}
			memcpy(variable_names[position], var, i);
			position++;
			if(tokens[pos]!=';') pos++;
		}
	}
	else
	error();
}
