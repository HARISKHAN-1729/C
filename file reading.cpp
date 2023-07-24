#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	FILE *fp ;
	char  buf[10]    ;	
	cin >>"chracters" >> ;
	cout<<"enter char"<<char<< endl;
	fp=fopen("my.txt" , "w");
	fwrite (&buf , strlen(buf) , 1 , fp);
	fclose (fp);
	return 0;
}
