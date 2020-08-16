#include <stdio.h>
#include "test.h"

vec3_t global_vector;

void setGlobalVec( float x, float y, float z) {
	global_vector[0] = x;
	global_vector[1] = y;
	global_vector[2] = z;
}

void printVec( vec3_t vec ) {
	printf("printVec: x %f y %f z %f\n", vec[0], vec[1], vec[2]);
}

void testFromC( void ) {
	setGlobalVec( 1, 2, 3 );
	printVec( global_vector );
}