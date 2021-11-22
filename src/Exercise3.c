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
  int shortest = 100;
    int longest = 1;
    int n, m, c = 0;
    for (int i = 0; i <= strlen(str); ++i){
        if(str[i] == ' ' || str[i] == '\0'){
            if(c <shortest){
                m = i;
                shortest = c;
            }
            else if (c > longest){
                longest = c;
                n = i;
            }
            c = 0;
        }
        else c ++;
    }
    printf("Shortest word: "); for (int i = m - shortest; i <= m -1; ++i) printf("%c",str[i]);
    printf("\nLongest word: "); for (int i = n -longest; i <= n -1; ++i) printf("%c",str[i]);
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
