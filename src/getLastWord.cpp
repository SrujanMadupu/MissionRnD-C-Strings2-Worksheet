/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int findlength(char *p){
	int len = 0;
	while (*p != '\0'){
		len++;
		p++;
	}
	return len;
}

char * get_last_word(char * str){
	if (str != NULL&&str!=""){
		int l = findlength(str),i,m=0;
		for (i = l - 1; i >= 0;i--){
			if (str[i] != ' '&&str[i-1] == ' '){
				break;
			}
		}
		char *laststr = (char*)malloc(sizeof(char)*(l));
		for (int k = i; k < l; k++){
			if (str[k] == ' '){
				break;
			}
			laststr[m] = str[k];
			m++;
		}
		laststr[m] = '\0';
		return laststr;
	}
	else{
		return NULL;
	}
}
