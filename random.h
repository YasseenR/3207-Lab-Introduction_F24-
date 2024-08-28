#include <stdlib.h>

char randstring(char s, size_t size ) {
	return (char)('A' + rand()%26);
}
