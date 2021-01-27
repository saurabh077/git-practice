#include<stdio.h>
#define MAX_STRING_LEN 14
int main(){
	char numbers[][MAX_STRING_LEN+1] = {"one","two", "three","four","five","six", "seven","eight","nine", "ten"};
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("\n%d : %s", i+1,numbers[i]);
	}	
	return 0;
}
