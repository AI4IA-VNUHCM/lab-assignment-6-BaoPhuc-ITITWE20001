/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int i,j,e,h;
	char *t="h";
	int Min=2;
	int Max=0;
	j=0;
	e=2;
	
	
	for (i=0;i<100;i++){

		if (str[i] == ' '){
			if (Min>j){
				
				Min = j;
				e=i;
			}
			if(Max<j){
				Max=j;
				h=i;

			}
			j=0;
		}
		else{
			j++;
		}
	}

	printf("Shorgest word: ");
	for(i=e-Min-1;i<e;i++){
		printf("%c",str[i]);
	}
	

	printf("\n");
	printf("Longest word: ");
	for(j=h-Max-1;j<h;++j){
		printf("%c", str[j]);
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
