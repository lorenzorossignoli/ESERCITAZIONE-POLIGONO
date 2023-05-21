#pragma once
# include "polygon.h"

using namespace std;
/// @class Rectangle

class Rectangle : public Polygon
{
private:
	float length;
	float width;

public:

   /// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rectangle();
	Rectangle(float w, float l);
	Rectangle(const Rectangle& r);
    ~Rectangle();
   /// @}

    /// @name OPERATORS
	/// @{
	Rectangle& operator=(const Rectangle& r);
	bool operator==(const Rectangle& r);
    /// @}

	/// @name BASIC HANDLING
	/// @{
    void Init();												
	void Init(const Rectangle &r);							
	void Reset();
    /// @}

	/// @name SETTERS
	void SetWidth(float w);
	void SetDim(float w, float l);
	void SetLength(float l);
	/// @}

/// @name GETTERS
	/// @{
	void GetDim(float& w, float& l);
	float GetLength();
	float GetWidth();
	float Area ();
	float Perimeter();
	/// @}

	/// @name DRAWING
	/// @{
	void Draw(); 
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
    /// @}
};



