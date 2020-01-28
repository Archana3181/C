#include <stdio.h>

// Defines four variables. 
#define VARIABLES \
	X(value1, 1) \
	X(value2, 2) \
	X(value3, 3) \
	X(value4, 4) 

// driver program. 
int main(void) 
{ 
	// Declaration of every variable is done through macro. 
	#define X(value, a) char value[10]; 
		VARIABLES
	#undef X 

	// String values are accepted for all variables. 
	#define X(value, a) scanf("\n%s", value); 
		VARIABLES 
	#undef X
	
	// Values are printed. 
	#define X(value, a) printf("%d) %s\n", a, value); 
		VARIABLES 
	#undef X 

	return 0;
} 
