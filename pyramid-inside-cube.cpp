#include<iostream>
#include<cmath>
using namespace std;

float pyramid_inside_cube(float cube_side)
{

	float a = 0.333;
	float b = cube_side * cube_side;
	float c = cube_side;
	cube_side = a * b * c;
	return cube_side;

}