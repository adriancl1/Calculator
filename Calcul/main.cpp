/*Adrián Castillo
Write a program asks for an integer and then asks for an option out of this menu (the program should go forever until the user quits):
a. Increment (use ++)
b. Decrement (use --)
c. Power of two
d. Quit*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char opt='x';
	int num;
	printf("Give me a number: ");
	scanf_s("%i", &num);
	while (opt != 'd'){
		printf("Your number now is %i. Press: \na)Increment.\nb)Decrement.\nc)Power of two.\nd)Quit.\n", num);
		scanf_s("%c", &opt);
		switch (opt){
		case 'a':
			num = num++;
			break;
		case 'b':
			num = num--;
			break;
		case 'c':
			num *= num;
			break;
		case 'd':
			break;
		default:
			break;
		}
	}
		printf("Your final number is: %i\n", num);
		system("pause");
		return 0;
	}