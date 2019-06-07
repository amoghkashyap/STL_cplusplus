//============================================================================
// Name        : STLMay.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<fstream>
#include<list>
#include<numeric>
#include<functional>

using namespace std;

//#define MYMAIN
#ifdef MYMAIN

class Shape {
public:
	virtual void draw() = 0;
	virtual void readInputs(istream& is) = 0;
	virtual ~Shape() {
	}
	;
};

class Square: public Shape {
public:
	int x1, y1, x2, y2;
	virtual void readInputs(istream& is) {
		is >> x1 >> y1 >> x2 >> y2;
	}
	virtual void draw() {
		cout << "I am a square from " << x1 << ":" << y1 << " to " << x2 << ":"
				<< y2 << endl;
	}
};

class Circle: public Shape {
public:
	int x, y, radius;
	virtual void readInputs(istream& is) {
		is >> x >> y >> radius;
	}
	virtual void draw() {
		cout << "I am circle with origin " << x << ":" << y << " And Radius "
				<< radius << endl;
	}
};

class Triangle: public Shape {
public:
	int x1, y1, x2, y2, x3, y3;
	virtual void readInputs(istream& is) {
		is >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	}
	virtual void draw() {
		cout << "I am a triangle from " << x1 << ":" << y1 << " to " << x2
				<< ":" << y2 << " to " << x3 << ":" << y3 << endl;
	}
};

Shape* createTheCorrectShape(int type) {
	switch (type) {
	case 1:
		return new Square();
	case 2:
		return new Circle();
	case 3:
		return new Triangle();
	}
	return 0;
}

/*void drawFunctionPtr(Shape* shp) {
	shp->draw();
}*/

int main() {
	list<Shape*> shapes;
	fstream fShape("shapes.txt");
	int type = 0;
	fShape >> type;
	while (fShape) {
		Shape* pShape = createTheCorrectShape(type);
		pShape->readInputs(fShape);
		shapes.push_back(pShape);
		fShape >> type;
	}

	for_each(shapes.begin(), shapes.end(), mem_fun(&Shape::draw));

	return 0;
}
#endif
