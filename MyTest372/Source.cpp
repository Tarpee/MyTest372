#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Jupiter.h"
#include "Jupiter.inl"

#include "Mars.h"
#include "Mercury.h"
#define Banana cout<<"Fruit"<<endl;

using namespace std;
using namespace first;
using namespace second;
using Apple = string;


template<typename T>
class Satellite {
	T a, b;
public:
	Satellite(T x, T y)
	{
		a = x;
		b = y;
	}
	T soof();

};
template<typename T>
T Satellite<T>::soof()
{
	return(a > b ? a : b);
}

template<typename S>
class Satellite1 {
public:
	Satellite1(S x) {
		cout << x << " this is not a character" << endl;
	}

};
template<>
class Satellite1<char> {
public:
	Satellite1(char x) {
		cout << x << " this is a character" << endl;
	}

};

template<typename Z>
Z qoof(Z a) {

	cout << a << endl;

	return a;
}

template<typename U>
U aoof(U a, U b)
{
	return a + b;

}
template<typename V,typename W>
V zoof(V a, W b) {

	return a + b;
}

class Satellite2 {
public:
	virtual void hoof() = 0;


};
class Satellite3 {
public:
	void hoof() {
		cout << "Barry" << endl;
	}

};
class Satellite4 {
public:
	void hoof() {
		cout << "Larry" << endl;
	}

};
class Satellitey {
public:
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;

};

class Enemy {
public:
	virtual void attack() = 0;


};
class Ninja:public Enemy {
	void attack() {
	
		cout << " Ninja attack" << endl;
	}

};
class Monster:public Enemy {
	void attack() {
		cout << " Monster attack" << endl;
	}

};

int sum(int a, int b)
{
	int result = 0;
	result = a + b;
	return result;

}
int sume(int a, int b)
{
	int resulty = 0;
	resulty = a + b;
	return resulty;

}




int main()
{   //master change 
	//test
	//test2

	std::unique_ptr<Mars>mars(new Mars());
	mars->qoof();

	Jupiter gg;
	gg.qoof<int>(23);

	int number[] = { 1,2,3 };

	for (auto num : number) {
		cout << num << endl;
	}

	Mercury ff;
	ff.foof();

	Mars dd;
	dd.doof();

	int numi = 10;
	int numo = 20;
	Mars ss;
	ss.soof(numi,numo);
	//numi and numo becomes another name for int& a,int& b

	Mars aa(11, 22);
	aa.print();

	int w = 100;
	auto s = 234;
	cout << s << endl;

	Mercury pp;
	pp.qoof();

	Banana
	Apple g = "Sed";
	cout << g << endl;


	int numz = 100;
	Mars ii;
	ii.noof(numz);
	cout << numz << endl;
	//numz becomes another name for int&a;

	int nums = 10;
	Mars oo;
	oo.moof(&nums);
	cout << nums << endl;
	// nums becmones another name for int *a

	Mars uu;
	uu.boof();


	vector<int>koof(3);
	koof.push_back(2);
	koof.push_back(3);

	for (int i = 0; i < koof.size(); i++)
	{
		cout << koof[i] << endl;
	}


	Mars yy;
	yy.voof(1,2,"Tom");
	yy.voof(1,2,33.2);
	yy.voof(1,3,42.3);

	int y[] = { 1,2,3,4,5 };
	cout << y[1] << endl;

	Mars tt;
	tt.coof(origin::first);

	cout << sum(12, 21) << endl;;
	cout << sume(32, 23) << endl;;



	Mars ee;
	ee.zoof(101);

	Mars rr;
	rr.xoof();


	us Callisto;
	Callisto.woof();

	Mars ww;
	ww.getTest();

	Mars qq;
	qq.qoof();

	Satellite4 SatelliteO;
	Satellite4 *Satelliteptr = &SatelliteO;
	Satelliteptr->hoof();


	int a = 100;
	int *aptr;
	aptr = &a;
	cout << *aptr << endl;


	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();




	Satellitey Io;
	Io.setName("kyle");
	cout << Io.getName() << endl;


	Satellite3 *Base;
	Satellite3 Derived;
	Base = &Derived;
	Base->hoof();

	cout << aoof<int>(12, 21) << endl;
	cout << zoof<int>(32, 23) << endl;

	qoof<int>(23);


	Satellite1<int>joof(23);
	Satellite1<char>joof1('w');

	Satellite<int>Titan(23, 23);
	cout << Titan.soof();





	cin.get();
}