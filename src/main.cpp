#include <stdio.h>

#include "nodetest.h"

int main(int argc, char **argv) {

	printf("I am good\n");

	//
	nodetest n;
	n.testCharArray(argc, argv);

	return 0;
}
