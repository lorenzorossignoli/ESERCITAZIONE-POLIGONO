#pragma once
# include "polygon.h"
#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
class Rhombus : public Polygon
{
private:
	float diagH;
	float diagV;
	float Side();

public:

   /// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus &r);
	~Rhombus();
	/// @}

	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);
    /// @}

    /// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rhombus &r);							
	void Reset();												
	/// @}

	/// @name SETTERS
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);
	/// @}

	/// @name GETTERS
	/// @{
	float GetDiagH();
	float GetDiagV();
	float GetSide();
	void GetDiagonals(float &dH, float &dV);
	float Area();
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

#endif