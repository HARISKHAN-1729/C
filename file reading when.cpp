#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	FILE *fptr ;
	char ch;
	fptr =fopen("afile.txt" , "w");
	while ((ch=getch ())!='\r')
	{
		cout<<ch ;
		putc( ch , fptr);
	}
	fclose (fptr);
}
