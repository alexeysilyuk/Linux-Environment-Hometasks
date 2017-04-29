#include <stdio.h>
#include <math.h>
#include "helper.h"


void loggingFunction(char mod,float root1,float root2, float im1, float im2){
	switch(mod){
	case 'd':
		if (VERBOSE_LOGGING){
			printf("Calculating Delta of Equation\n");
			printf("Delta of Equation is:\n");
			printf("%.3f\n",root1);
		}
		break;


	case 'c':
		if (VERBOSE_LOGGING){
			printf("Roots are complex number.\n");
			printf("Calculating complex roots of Equation\n");
			printf("Roots of quadratic equation are: \n");
		}
		printf("%.3f%+.3fi \n",root1,im1);
		printf("%.3f%+.3fi \n",root2,im2);
		break;

	case '1':
		if (VERBOSE_LOGGING){
			printf("Both roots are equal.\n");
			printf("Calculating root of Equation\n");
	   		printf("Root of quadratic equation is\n");
		}
		printf("%.3f \n", root1);
		break;

	case '2':
		if (VERBOSE_LOGGING){
			printf("Roots are real numbers.\n");
			printf("Calculating real roots of Equation\n");
			printf("Roots of quadratic equation are: \n");
		}
		printf("%.3f \n", root1);
		printf("%.3f \n", root2);
		break;
		
	default:
		printf("Error\n");
		
	}

}


void solveEquation(float a, float b, float c){
	float d = getDelta(a,b,c);
	if (d < 0) solveComplex(a,b,c,d);
	else if (d == 0) solveOneRoot(a,b,c);
	else solveTwoRoots(a,b,c,d);
}


float getDelta(float a, float b, float c){
	float delta = b * b - 4 * a * c;
	loggingFunction('d',delta,0,0,0);
	return delta;
}	



void solveComplex(float a, float b , float c, float d){
	float root1 =-b/(2*a);
	float root2 = root1;
	float im1 = sqrt(-d)/(2*a);
	float im2 = -im1;

	loggingFunction('c',root1,root2,im1,im2);
	return;
}

void solveOneRoot(float a , float b, float c){
   	float root = -b /(2* a);

	loggingFunction('1',root,root,0,0);
	return;
}

void solveTwoRoots(float a, float b, float c, float d){
	float root1 = ( -b + sqrt(d)) / (2* a);
	float root2 = ( -b - sqrt(d)) / (2* a);
	loggingFunction('2',root1,root2,0,0);
	return;
}	
