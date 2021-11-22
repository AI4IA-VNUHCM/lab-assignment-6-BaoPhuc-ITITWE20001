/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	int i,j,k;
	while (n!=0)
	{
		if (n>999){
			j=n/1000;
			if(j==1){
				printf("one thousand ");
			}
			else if (j==2)
			{
				printf(" two thousand ");
			}
			else if (j==3)
			{
				printf(" three thousand ");
			}
			else if (j==4)
			{
				printf("four thousand ");
			}
			else if (j==5)
			{
				printf("five thousand ");
			}
			else if (j==6)
			{
				printf("six thousand ");
			}
			else if (j==7)
			{
				printf("seven thousand ");
			}
			else if (j==8)
			{
				printf("eight thousand ");
			}
			else if (j==9)
			{
				printf("nine thousand ");
			}
			n=n-(j*1000);
		}
		else if (n>99)
		{
			j=n/100;
			if(j==1){
				printf("one hundred ");
			}
			else if (j==2)
			{
				printf("two hundred ");
			}
			else if (j==3)
			{
				printf("three hundred ");
			}
			else if (j==4)
			{
				printf("four hundred ");
			}
			else if (j==5)
			{
				printf("five hundred ");
			}
			else if (j==6)
			{
				printf("six hundred ");
			}
			else if (j==7)
			{
				printf("seven hundred ");
			}
			else if (j==8)
			{
				printf("eight hundred ");
			}
			else if (j==9)
			{
				printf("nine hundred ");
			}
			n=n-(j*100);
			
		}
		else if (n>9)
		{
			j=n/10;
			if(j==1){
				n=n-(j*10);
				if(n==9){
					printf("nineteen ");
				}
				else if (n==1)
				{
					printf("eleven ");
				}
				
				else if (n==2)
			{
				printf("twelve ");
			}
			else if (n==3)
			{
				printf("thirdteen ");
			}
			else if (n==4)
			{
				printf("fourteen ");
			}
			else if (n==5)
			{
				printf("fifteen ");
			}
			else if (n==6)
			{
				printf("sixteen ");
			}
			else if (n==7)
			{
				printf("seventeen ");
			}
			else if (n==8)
			{
				printf("eighteen ");
			}
			n=0;
				
			}
			else if (j==2)
			{
				printf("twenty ");
			}
			else if (j==3)
			{
				printf(" thirdty ");
			}
			else if (j==4)
			{
				printf("fourty ");
			}
			else if (j==5)
			{
				printf("fifty ");
			}
			else if (j==6)
			{
				printf("sixty ");
			}
			else if (j==7)
			{
				printf("seventy ");
			}
			else if (j==8)
			{
				printf("eighty ");
			}
			else if (j==9)
			{
				printf("ninety");
			}
			n=n-(j*10);
			
		}
		else if (n>0)
		{
			if(n==9){
					printf("nine");
				}
				else if (n==1)
				{
					printf("one ");
				}
				
				else if (n==2)
			{
				printf(" two ");
			}
			else if (n==3)
			{
				printf("three ");
			}
			else if (n==4)
			{
				printf("four ");
			}
			else if (n==5)
			{
				printf("five ");
			}
			else if (n==6)
			{
				printf("six ");
			}
			else if (n==7)
			{
				printf("seven ");
			}
			else if (n==8)
			{
				printf("eight ");
			}
			n=0;
		}
		
		
		
		
	}
	
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
