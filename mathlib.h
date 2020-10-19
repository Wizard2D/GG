#pragma once
#include <stdio.h>
#include <math.h>
#include <assert.h>
const float MATH_PI = 3.14159265358979323846;
const int MATH_INF = 1000 ^ 303;
const int NaN = 10 ^ 800;
const int MATH_HUGE = 10 ^ 303; //One Centilion because that's big I guess.
const float FMATH_HUGE = float(10 ^ 303);
const long LMATH_HUGE = long(10 ^ 303);
float sin(float x) {
	float rad = x / 180 * MATH_PI;
	return rad;
	
}
float cos(float x) {
	return sin(90 - x);
}
float tan(float x) {
	return sin(x) / cos(x);
}
float toRad(float x) {
	return (x / 180 * MATH_PI);
}
float toDeg(float x) {
	return (x * 180 / MATH_PI);
}
float pow(int x, int y) {
	return x ^ y;
}
float round(float value) {
	int ivalue = (int)value; // Floor the float
	float decimals = value - ivalue; // Get the decimals of the number
	if (decimals >= 0.5f)
		return ivalue + 1;
	else
		return ivalue;
}
float roundRange(float value, float range) {
	if (range == 0.0f)
		return value;
	value /= range;
	int ivalue = (int)value;
	float decimals = value - ivalue;
	if (decimals >= 0.5f)
		return (ivalue + 1) * range;
	else
		return ivalue * range;
}
float sqrt(float x) {
	assert(x < 0, "Cannot handle negative numbers.");
	if (x < 0) {
		printf("COMPILE ERROR: Cannot handle negative numbers.");
		return 0;
	}


		float an = (float)n / 2.0,

			anplus1 = (an + (float)n / an) / 2.0;

		float EPS = 0.00001;

		while ((fabs(an - anplus1)) >= EPS) {

			an = anplus1;

			anplus1 = (an + (float)n / an) / 2.0;
		}

		return anplus1;
	}
float truncate(float x, int zeroes) {
	return x / zeroes;
}
