#include<iostream>
#include "Rectangle.h"
/// @brief default constructor 
Rectangle::Rectangle() 
{

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}
/// @brief default constructor and check value of passed variables
/// @param w pass width of rectangle
/// @param l pass length of rectangle
Rectangle::Rectangle(float w, float l) 
{

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;
}
/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rectangle::Rectangle(const Rectangle& r) 
{

	cout << "Rectangle - copy constructor" << endl;
	length= r.length;
	width = r.width;
}
/// @brief implement the distructor
Rectangle::~Rectangle() 
{

	cout << "Rectangle - destructor" << endl;

}
/// @brief copy construnctor
/// @param r 
/// @return pointer
Rectangle& Rectangle::operator=(const Rectangle& r) 
{
cout << "Rectangle - operator =" << endl;
return *this;
}
/// @brief implements the equality comparison operator overload for the Rectangle class
/// @param r 
/// @return bool 
bool Rectangle::operator==(const Rectangle& r) {

	if (r.width == width && r.length == length)
		return true;

	return false;
}
/// @brief init proprieties to zero value
void Rectangle::Init() 
{
	Reset();
    width=0;
    length=0;
}

void Rectangle::Init(const Rectangle &p) 
{
	Reset();
} 
/// @brief reset proprieties of class
void Rectangle::Reset() 
{
	width=0;
	length=0;
}
/// @brief set width of rectangle
/// @param w check width if negative and set the width of rectangle
void Rectangle::SetWidth(float w) 
{

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;
}
/// @brief set lenght of rectangle
void Rectangle::SetLength(float l) 
{

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}
/// @brief set lenght and width of rectangle
void Rectangle::SetDim(float w, float l) {

	SetWidth(w);
	SetLength(l);
}
/// @brief get width of rectangle
/// @return width
float Rectangle::GetWidth()
{
  return width;
}
/// @brief get lenght of rectangle
/// @return lenght
float Rectangle::GetLength() 
{
return length;
}
/// @brief get lenght and width of rectangle
/// @param float print lenght and width 
void Rectangle::GetDim(float & w, float & l) 
{
	 l= length;
	 w = width;
	cout << "La larghezza del rettangolo e" << l<<endl;
	cout << "La larghezza del rettangolo e" << w<<endl;
}
/// @brief get area of rectangle
/// @return area
float Rectangle::Area() 
{

	return width * length;

}
/// @brief get perimeter of rectangle
/// @return perimeter
float Rectangle::Perimeter() {

	return 2 * (width + length);

}
/// @brief draw somenthing
void Rectangle::Draw()
{
	cout <<"Sto disegnando il rettangolo" <<endl;
}
/// @brief write an error message 
/// @param string message to be printed
void Rectangle::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}
/// @brief write a warning message 
/// @param string message to be printed
void Rectangle::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}
/// @brief for debugging: all about the object
void Rectangle::Dump() {
	cout << endl;
	cout << "---Rectangle---" << endl;
	cout << endl;

	cout << "Width = " << width << endl;
	cout << "Length = " << length << endl;
	cout << "Perimeter = " << Perimeter() << endl;
	cout << "Area = " << Area() << endl;
	cout << endl;

}