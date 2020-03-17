#include <stdlib.h>
#include <stdio.h>
#include <math.h>

	float sum(float num1, float num2){
	float result = num1 + num2;
	printf("The result is %f\n", result);
	}

	float multi(float num1, float num2){
	float result = num1 * num2;
	printf("The result is %f\n", result);
	}

	float minus(float num1, float num2){
	float result = num1 - num2;
	printf("The result is %f\n", result);
	}

	int modulo(float num1, float num2){
	int result = (int)num1 % (int)num2;
	printf("The result is %d\n", result);
	}

	float divided(float num1, float num2){
	float result = num1 / num2;
	printf("The result is %f\n", result);
	}

	void instructions(){
	printf("This is a calculator chose one:\n");
	printf("Add push ----> '+'\n");
	printf("Subtraction push ---> '-'\n");
	printf("Multiplication push ----> 'x'\n");

	printf("Dvivision push ----> '/'\n");
	printf("Module push ----> '%%'\n\n");

	}

	void main (int argc, char** argv){

	int arguments = argc-1;
	if(arguments == 0){

	instructions();

	}
	else {

	float num1=atof(argv[1]);
	char sym=(char)*argv[2];
	float num2=atof(argv[3]);


	switch(*argv[2]){

	case '+':

		sum(num1, num2);
	break;

	case '-':

		minus(num1, num2);
	break;

	case 'x':
		multi(num1, num2);
	break;

	case '/':

		divided(num1, num2);
	break;

	case '%':

		modulo(num1, num2);
	break;
	}
	}
}
