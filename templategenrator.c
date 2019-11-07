/*
	 Objective : Write a c program that takes command line argumnets and generate a c template file
	1. Usage :
		templategen -f <filename> -p <path>

	2.Add the executable to PATH so that it can be used from anywhere

 */

#include<stdio.h>

//defining default generator function

int  generator(char *fileName, char *path );

int main(int argc ,char *argv[]){
	
	if (argc == 1){
		printf("No arguments provided generating test.c with simple C program skeleton");
		generator("test.c",".");
	}
		
	return 0;
}

int  generator(){
	char template[] = "#include<stdio.h>\nint main()\n{\n\treturn 0;\n}";

	//declaring file pointer
	FILE *fp;
	
	//opening file for reading
	fp =fopen("xyz.c","w");
	
	//if file pointer is null theres an  error occured due to permission or file doesnt exist
	if (fp == NULL){
		printf("Cannot Open File ");
		return ( -1 );
	}
	
	//writing to the file

	fprintf(fp,"%s",template);
	
}
