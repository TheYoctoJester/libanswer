#include "answer.h"

#include <stdio.h>
#include <stdlib.h>

void answer() {
	printf("the answer is\n");
	system("echo \"6 * 7\" | bc");
}
