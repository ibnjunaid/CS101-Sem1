/*
 	Objective:: Write a C program and add that to environment variable 
				that inits a "C" program file 
		features:
			1.Should be able to take file name as parameter
 */

#include<stdio.h>

int main(){
	char initialText [100] = "//Comment here\n
						   \t#include<stdio.h>\n
							int main(){\n
							\t\n}";
	FILE *fp;
	fp= fopen("test.c","rw");
	fprintf(fp,initialText);
	fclose(fp);
}
