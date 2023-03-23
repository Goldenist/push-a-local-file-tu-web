#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(string name_, int dimension_, int num[])
{
	name = name_;
	dimension = dimension_;
	param = new int[dimension + 1];
	for (int i = 0; i < dimension; i++)
	{
		param[i] = num[i];
	}
	cout << "construct a vector called " << name << ".\n";
}

Vector::~Vector()
{
	cout << "release memory from a vector called " << name << ".\n";
	delete[] param;
}

void Vector::isEqual(const Vector& vec)
{
	bool flag = 1;
	if (name == vec.name)
	{
		cout << "same name, ";
	}
	else
	{
		cout << "different name, ";
	}

	if (dimension == vec.dimension)
	{
		for (int i = 0; i < dimension; i++)
		{
			if (param[i] != vec.param[i])
			{
				flag = 0;
			}
		}
		if (flag == 0)
		{
			cout << "different value." << endl;
		}
		else if (flag == 1)
		{
			cout << "same value." << endl;
		}
	}
	else
	{
		cout << "different value." << endl;
	}
}

void Vector::Print()
{
	cout << name << "(";
	for (int i = 0; i < dimension - 1; i++)
	{
		cout << param[i] << ", ";
	}
	cout << param[dimension - 1] << ")" << endl;
}

void Vector::setName(string name_)
{
	name = name_;
}