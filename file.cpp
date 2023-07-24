#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std ;
int main()
{
	FILE *fptr;
	char ch;
	fptr = fopen (" afile.txt" , "r");
	while ((ch=getc(fptr))!=EOF)
	cout <<ch;
	fclose(fptr);
	getch();
	
}
