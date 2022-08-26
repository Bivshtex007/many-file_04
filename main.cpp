#include<iostream>
#include<cmath>
using namespace std;

float cube_volume(float cube_side);
float sphere_inside_cube(float cube_side);
float sphere_around_cube(float cube_side);
float pyramid_inside_cube(float cube_side);

int main()
{

	float cube_side;
	cout << "Enter Length of the Cube side" << endl;
	cin >> cube_side;
	cout << "The volume of Cube will be = " << cube_volume(cube_side) << endl;
	cout << "The volume of Sphere around Cube will be = " << sphere_around_cube(cube_side) << endl;
	cout << "The volume of Sphere inside Cube will be = " << sphere_inside_cube(cube_side) << endl;
	cout << "The volume of Pyramid inside Cube will be = " << pyramid_inside_cube(cube_side) << endl;
	return 0;

}