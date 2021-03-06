#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include"point.h"
using namespace std;

class Circle:public Shape
{
private:
	//data member, private
	Point center;
	double m_radius;
public:
			//member function, public
	Circle();//default constructor
	Circle(const Point&a, const double& r);//constructor
	Circle(const Circle&O);//copy constructor
	virtual ~Circle();//destructor

	Circle& operator =(const Circle& source);

	Point CenterPoint() const; //get center point
	double Radius() const; //get radius

	void CenterPoint(const Point& pt);//modify center point
	void Radius(const double& r); //modify radius

	double Diameter() const;// get diameter
	double Area() const;// get area
	double Circumference() const; //get circumference

	string ToString() const;
	void Draw() const;
	friend ostream& operator << (ostream & os, const Circle & c);
};

//ostream& operator << (ostream & os, const Circle & c);
#endif // !CIRCLE_H


