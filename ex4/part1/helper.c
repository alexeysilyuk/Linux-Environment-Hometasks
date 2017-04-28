#include <stdio.h>
#include <math.h>
#include "helper.h"


float getDelta(float a, float b, float c){
	float delta = b * b - 4 * a * c;

	if (VERBOSE_LOGGING) {
		printf("Delta of Equation is:\n");
		printf("%.3f\n",delta);
	}

	return delta;
}	

void solveEquation(float a, float b, float c){
	float d = getDelta(a,b,c);
	if (d < 0) solveComplex(a,b,c,d);
	else if (d == 0) solveOneRoot(a,b,c);
	else solveTwoRoots(a,b,c,d);
}

void solveComplex(float a, float b , float c, float d){
	if (VERBOSE_LOGGING){
	printf("Roots are complex number.\n");
	printf("Roots of quadratic equation are: \n");
	}

	printf("Root 1 : %.3f%+.3fi \n",-b/(2*a),sqrt(-d)/(2*a));
	printf("Root 2 : , %.3f%+.3fi \n",-b/(2*a),-sqrt(-d)/(2*a));
	return;
}

void solveOneRoot(float a , float b, float c){
   	float root = -b /(2* a);

	if (VERBOSE_LOGGING){
	printf("Both roots are equal.\n");
   	printf("Root of quadratic equation is\n");
	}
	
	printf("Root: %.3f \n" , root);
	return;
}

void solveTwoRoots(float a, float b, float c, float d){
	float root1 = ( -b + sqrt(d)) / (2* a);
	float root2 = ( -b - sqrt(d)) / (2* a);

	if (VERBOSE_LOGGING){
	printf("Roots are real numbers.\n");
	printf("Roots of quadratic equation are: \n");
	}

	printf("Root 1 : %.3f \n ", root1);
	printf("Root 2 : %.3f \n ", root2);
}
