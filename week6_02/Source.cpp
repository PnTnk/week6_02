#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int binaryToDec(char[50]);
int main()
{
	char n[50];
	printf("Enter Binary : ");
	scanf("%s", n);
	printf("%d", binaryToDec(n));

}
int binaryToDec(char n[50]) {
	char * p;
	int i = strlen(n)-1;
	int a = 0;
	int x = 0;
	while (i  >= 0) {
		if (n[i] == '1') { x = x + 1 * pow(2,a); a++;
		}
		else if (n[i] == '0') { x = x + 0; a++;
		}
		
		i--;
	}
	return x;
}