/*
 * nodetest.cpp
 *
 *  Created on: 18 Feb 2016
 *      Author: eric
 */

#include "nodetest.h"

#include <stdio.h>

nodetest::nodetest() {

}

nodetest::~nodetest() {

}

void nodetest::testCharArray(int count, char** array) {

	for (int i = 0; i < count; ++i) {
		puts(array[i]);
	}

}
