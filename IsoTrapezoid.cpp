#include "IsoTrapezoid.h"
/// @brief default constructor
IsoTrapezoid::IsoTrapezoid()
{
 bottomSide=0;
 height=0;
 topSide=0;
}
/// @brief default constructor and check value of passed variables
/// @param bottomSide pass bottomSide of isotrapezoide
/// @param heigth pass heigth of isotrapezoide
/// @param topSide pass topSide of isotrapezoide
IsoTrapezoid::IsoTrapezoid(float bottomSide,float height,float topSide)
{
 bottomSide=bottomSide;
 height=height;
 topSide=topSide;
 CheckbottomSide();
 Checkpropieties();
}
/// @brief copy constructor 
/// @param r reference to the object that should be copied 
IsoTrapezoid::IsoTrapezoid(const IsoTrapezoid& other) 
{
    bottomSide= other.bottomSide;
    topSide = other.topSide;
    height = other.height;
}
/// @brief implement the distructor
IsoTrapezoid::~IsoTrapezoid()
{
cout << " IsoTrapezoid- destructor" << endl;
}
/// @brief copy construnctor
/// @param r 
/// @return pointer
IsoTrapezoid& IsoTrapezoid::operator=(const IsoTrapezoid& r) 
{
    return *this;
}
/// @brief implements the equality comparison operator overload for the isotrapezoid class
/// @param r 
/// @return bolean value
bool IsoTrapezoid::operator==(const IsoTrapezoid& r)
{
    if (r.bottomSide == bottomSide && r.topSide == topSide && r.height == height)
        return true;
    else
        return false;
}
/// @brief init proprieties to zero value
void IsoTrapezoid::Init() 
{
	Reset();
    topSide=0;
    bottomSide=0;
    height=0;
}

void IsoTrapezoid::Init(const Polygon &p) 
{
	Reset();
} 
/// @brief reset proprieties of class
void IsoTrapezoid::Reset() 
{
	topSide=0;
    bottomSide=0;
    height=0;
}
/// @brief check bottomSide if is not negative
/// @return bolean value
bool IsoTrapezoid::CheckbottomSide()
{
if(bottomSide<topSide)
{
    return false;
}
else 
{
    return true;
}
}
 /// @brief check proprieties of class
 /// @return bolean value
 bool IsoTrapezoid::Checkpropieties()
 {
    if(bottomSide<0 && topSide<0&&height<0)
    {
        return false;
    }
    else
    {
        return true;
    }
 }
 /// @brief get side of isotrapezoide
 /// @return side
float IsoTrapezoid::GetSide()
{
   float side = sqrt((pow(bottomSide-topSide, 2) + pow(height, 2)));
    return side;
}
/// @brief get area of isotrapezoid
/// @return area
float IsoTrapezoid::Area()
{
   return ((bottomSide+topSide)*height/2);
}
/// @brief get perimeter of isotrapezoid
/// @return perimeter
float IsoTrapezoid::Perimeter()
{
 return ((topSide+bottomSide)+height*2);
}
/// @brief draw something
void IsoTrapezoid::Draw()
{
    cout << "Ho costruito un isotrapezoide" << endl;
}
/// @brief write an error message 
/// @param string message to be printed
void IsoTrapezoid::ErrorMessage(const char *string) 
{
	
	cout << endl << "ERROR -- Isotrapezoid --";
	cout << string << endl;

}
/// @brief write a warning message 
/// @param string message to be printed
void IsoTrapezoid::WarningMessage(const char *string) 
{
	
	cout << endl << "WARNING -- Isotrapezoid --";
	cout << string << endl;
}
/// @brief for debugging: all about the object
void IsoTrapezoid::Dump() 
{
	cout << endl;
	cout << "---Isotrapezoid---" << endl;
	cout << endl;

	cout << "bottomSide = " << bottomSide<< endl;
	cout << "topSide= " << topSide << endl;
	cout << "heigth"<<height<< endl;
	cout << "Perimeter = " << Perimeter() << endl;
	cout << "Area = " << Area() << endl;
	cout << endl << flush;

}