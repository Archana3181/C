/*
#include <stdio.h> 

// Creating an enum of colors. 

enum colors { 

	RED, 

	BLACK, 

	WHITE, 

	BLUE 

}; 



//A utility that takes the enum value and returns 

//corresponding string value

char* toString(enum colors value) 

{ 

	switch (value) { 

	case RED: 

		return "RED"; 

	case BLACK: 

		return "BLACK"; 

	case WHITE: 

		return "WHITE"; 

	case BLUE: 

		return "BLUE"; 

	} 

} 



// driver program. 

int main(void) 

{ 

	enum colors color = WHITE; 

	printf("%s", toString(color)); 

	return 0; 

}*/ 


#include <stdio.h> 
// Defining a macro with the values of colors. 

#define COLORS \
	X(RED)	\
	X(BLACK) \
	X(WHITE) \
	X(BLUE) 

// Creating an enum of colors by macro expansion. 
enum colors { 
	#define X(value) value, 
		COLORS 
	#undef X 
}; 

// A utility that takes the enum value and returns corresponding string value 
char* toString(enum colors value) 
{ 
	switch (value) { 
		#define X(color) \
			case color: \
				return #color; 
				COLORS
		#undef X 

	}
} 
// driver program. 
int main(void) 
{ 
	enum colors color = WHITE; 
	printf("%s", toString(color)); 
	return 0; 
} 
