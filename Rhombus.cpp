#include<iostream>
#include "rhombus.h"

/// @brief default constructor
Rhombus::Rhombus() 
{
    diagH = 0;
	diagV = 0;
}
/// @brief default constructor and check value of passed variables
/// @param dH pass diagH of rhombus
/// @param dV pass diagV of rhombus
Rhombus::Rhombus(float dH, float dV) 
{
	diagH = 0;
	diagV = 0;
    if (dH <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		diagV = dV;
}
/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus& r)
{
	diagH = r.diagH;
	diagV = r.diagV;
}
 /// @brief implement the distructor
Rhombus::~Rhombus() 
{
cout << "Rhombus - destructor" << endl;
}
/// @brief get side of rhombus
/// @return float side
float Rhombus::Side()
{
float lato = 0;
float sum = pow((diagH / 2), 2) + pow((diagV / 2), 2);
lato = sqrt(sum);
}
/// @brief copy construnctor
/// @param r 
/// @return pointer
Rhombus& Rhombus::operator=(const Rhombus& r)
{
return *this;
}
/// @brief Compare whether two objects of the same class are equal
/// @param r 
/// @return bolean value
bool Rhombus::operator==(const Rhombus& r) 
{
    if (r.diagH == diagH && r.diagV == diagV)
    {
        return true;
    }
    
    return false;
}
/// @brief init proprieties to zero value
void Rhombus::Init() 
{
	Reset();
    diagH=0;
    diagV=0;
}

void Rhombus::Init(const Rhombus &p) 
{
	Reset();
} 
/// @brief reset proprieties of class
void Rhombus::Reset() 
{
	diagH=0;
    diagV=0;
}
/// @brief set dH and dV of rhombus
/// @param dH and dV
void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}
/// @brief set diagH of rhombus
/// @param diagH
void Rhombus::SetDiagH(float dH)
{
	if (dH <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		diagH = dH;
}
/// @brief set diagV of rhombus
/// @param dV
void Rhombus::SetDiagV(float dV)
{
	if (dV <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		diagV = dV;
}
/// @brief get diagH of rhombus
/// @return diagH
float Rhombus::GetDiagH()
{
	return diagH;
}
/// @brief get diagV of rhombus
/// @return diagV
float Rhombus::GetDiagV()
{
	return diagV;
}
/// @brief get side of rhoumbus
/// @return side
float Rhombus::GetSide()
{
	return Side();
}
/// @brief set diagH and diagV of rhombus
/// @param dH and dV
void Rhombus::GetDiagonals(float & dH, float & dV)
{
   dH=diagH;
   dV=diagV;
}
/// @brief   get area of rhombus
/// @return area
float Rhombus::Area()
{
	return ((diagH * diagV) / 2);
}
/// @brief   get perimeter of rhombus
/// @return perimeter
float Rhombus::Perimeter()
{
	return (Side() * 4);
}
/// @brief draw something 
void Rhombus::Draw()
{
	cout <<"Sto disegnando il rombo" <<endl;
}
/// @brief write an error message 
/// @param string message to be printed
void Rhombus::ErrorMessage(const char* string)
{
	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;
}
/// @brief write a warning message 
/// @param string message to be printed
void Rhombus::WarningMessage(const char* string) 
{

	cout << endl << "WARNING -- Rhombus --";
	cout << string << endl;

}
/// @brief for debugging: all about the object
void Rhombus::Dump() 
{
	cout << endl;
	cout << "---Rhombus---" << endl;
	cout << endl;

	cout << "DiagH = " << diagH << endl;
	cout << "DiagV = " << diagV << endl;
	cout << "Perimeter = " << Perimeter() << endl;
	cout << "Area = " << Area() << endl;
	cout << endl;

}
