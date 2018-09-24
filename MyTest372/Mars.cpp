#include "Mars.h"
#include <iostream>


namespace first {


	int us::woof()
	{
		eoof = 10;
		std::cout << eoof << std::endl;

		return eoof;
	}

	Mars::Mars(int a,int b)
		:poof(a),roof(b)
	{
	 
	}
	void Mars::print()
	{
		std::cout << poof << std::endl;
		std::cout << roof << std::endl;
	}
	Mars::Mars()
	{
	}


	Mars::~Mars()
	{
	}
	void Mars::qoof()
	{
		std::cout << "Henry" << std::endl;

	}
	int Mars::getTest()
	{
		std::cout << test << std::endl;

		return test;
	}
	int Mars::zoof(int a)
	{
		std::cout << a << std::endl;

		return a;
	}
	int Mars::xoof(const int a)
	{
		std::cout << a << std::endl;
		return a;
	}
	void Mars::coof(origin orig)
	{
		switch (orig)
		{
		case origin::first:
			std::cout << "First" << std::endl;
			break;
		case origin::second:
			std::cout << "Second" << std::endl;
			break;
		case origin::third:
			std::cout << "Third" << std::endl;
			break;
		default:
			std::cout << "default" << std::endl;
		}

	}
	void Mars::voof(int a, int b, std::string c)
	{
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;



	}
	void Mars::voof(int d, int e, float f)
	{
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << f << std::endl;



	}
	void Mars::voof(int g, int h, double i)
	{
		std::cout << g << std::endl;
		std::cout << h << std::endl;
		std::cout << i << std::endl;



	}
	void Mars::boof()
	{
		int l = 321;
		int& r = l;
		std::cout << l << std::endl;
	
	
	}
	void Mars::noof(int& a)
	{
		a = a * 2;
	
	}
	void Mars::moof(int *a)
	{
		*a = *a * 2;
	
	}

	void Mars::aoof(int& a,int& b)
	{
		a = a * 2;
		b = b * 2;
	
	}
	void Mars::soof(int c,int d)
	{
		aoof(c, d);
		std::cout << c << std::endl;
		std::cout << d << std::endl;
	
	}
	void Mars::doof()
	{
		qoof();
	}


}