#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//converts the string to lowercase
// You may or may not want to use these functions in your program 
char* toLower(char* s) {
  for(char *p=s; *p; p++) *p=tolower(*p);
  return s;
}

//converts the string to uppercase
char* toUpper(char* s) {
  for(char *p=s; *p; p++) *p=toupper(*p);
  return s;
}


/*
 * checks if the contents of string str1 and str2 are equal
 * first convert both strings to either lowercase or uppercase
 * then use strcmp() function to compare
 * return 1 if equal. Else 0.
 * YOU MAY USE ANY STRING FUNCTION 
 */
int equalStr(char* str1, char* str2){
	// Write your code below
	return !strcmp(toUpper(str1), toUpper(str2));
}

/*
 * Checks if the given string is a Palindrome
 * A palindrome is a word, phrase, or number that reads the same backward as forward.  
 * For example: madam, gig, radar
 * The function must return 1 if the string is Palindrome and 0 otherwise. 
 */
int isPalindrome(char str[])
{
	// Write your code below
	for(int i = 0; i < strlen(str)/2; i++)
	{
		if(str[i] != str[strlen(str)-i-1])
		{
			return 0;
		}		
	}	
	return 1;
}



/*
 * copy the string str1 to str2
 * DO NOT USE strcpy function
 */
void duplicateStr(char str1[], char str2[])
{
	// write your code below
	for(int i = 0; i <= strlen(str1); i++)
	{
		str2[i] = str1[i];
	}
	
}



int main() 
{
	if (isPalindrome("radar\0")==1 && isPalindrome("geiig\0")==0){
		printf("Palindrome test passed!\n");
	}
	else{
		printf("Palindrome test failed!\n");
	}
	
	char str5[] = "radar\0";
	char str6[] = "RadaR\0";
	char str7[] = "joke\0";
	char str8[] = "joker\0";
  	
	if (equalStr(str5, str6)==1 && equalStr(str7, str8)==0){
		printf("EqualStr test passed!\n");
	}
	else{
		printf("EqualStr test failed!\n");
	}
	
	char str1[] = "geeks\0"; 
	char str2[] = "forgeeks\0";	
	duplicateStr(str1, str2);

	if (strcmp(str1, str2) == 0){
		printf("exchangeStr test passed!\n");
	}
	else{
		printf("exchangeStr test failed!\n");
	}

	return 0;
}

