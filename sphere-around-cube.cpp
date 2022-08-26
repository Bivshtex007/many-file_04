#include<iostream>
#include<cmath>
using namespace std;

float sphere_around_cube(float cube_side)
{
	float a = (4/3);
	float b = 3.14;
	float c = pow (cube_side * pow (3, 1/2), 3);
	cube_side = a * b * c;
	return cube_side;
}