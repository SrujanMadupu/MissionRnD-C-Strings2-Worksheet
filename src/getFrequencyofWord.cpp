/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int stringlen(char *p){
	int len = 0;
	while (*p != '\0'){
		len++;
		p++;
	}
	return len;
}

int count_word_in_str_way_1(char *str, char *word){
 	if (str != NULL){
		int i = 0,j=0,compare=0,count=0;
		int l = stringlen(word);
		while (str[i] != '\0'){
			if (str[i] == word[j]){
				compare++;
				if (compare == l){
					count++;
					j = 0;
					compare = 0;
					if (str[i] != word[j]||l==1){
						i++;
					}
				}
				else{
					i++;
					j++;
				}
			}
			else{
				j = 0;
				compare = 0;
				i++;
			}
		}
		return count;
	}
	else{
		return 0;
	}
}

int count_word_int_str_way_2_recursion(char *str, char *word){

	return 0;
}

