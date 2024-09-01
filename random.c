#include <stdlib.h>
#include "random.h"

char randchar() {
	
	char c = (char)('A' + rand()%26);
	

	return c;
	 
}
