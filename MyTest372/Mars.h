#pragma once
#include <string>



namespace first {


	enum class origin {

		first,
		second,
		third



	};


	struct us {
	public:
		int woof();

	private:
		int eoof;

	};

	class Mars
	{
	public:

		Mars(int a,int b);
		void print();

		Mars();
		~Mars();
		void qoof();
		int getTest();

		int zoof(int a);
		int xoof(const int a = 120);
		void coof(origin orig);

		void voof(int a, int b, std::string c);
		void voof(int d, int e, float f);
		void voof(int g, int h, double i);

		void boof();

		void noof(int& a);
		void moof(int * a);

		void aoof(int & a, int & b);

		void soof(int c, int d);

		void doof();



	private:
		int test = 100;
		int poof;
		int roof;

	};



}