#ifndef ISOTRAPEZOID_H
#define ISOTRAPEZOID_
# include "polygon.h"
#pragma once
/// @class Isotrapezoid
class IsoTrapezoid : public Polygon
{
    private:
      float bottomSide;
      float height;
      float topSide;

    public:
    /// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
    IsoTrapezoid();
    IsoTrapezoid(float bottomSide,float height,float topSide);
    IsoTrapezoid(const IsoTrapezoid& other);
    ~IsoTrapezoid();
    /// @}

     /// @name OPERATORS
	/// @{
	IsoTrapezoid& operator=(const IsoTrapezoid& r);
	bool operator==(const IsoTrapezoid& r);
    /// @}

    /// @name BASIC HANDLING
	/// @{
    void Init();												
	void Init(const Polygon &r);							
	void Reset();
    /// @}

    /// @name CHECKERS
    bool CheckbottomSide();
    bool Checkpropieties();
    /// @}

    /// @name GETTERS
	/// @{
    float GetSide();
    float Area();
    float Perimeter();
    /// @}
    
    /// @name DRAWING
	/// @{
	void Draw(); 
	/// @}

    /// @name DEBUG and SERIALIZATION 
	/// @{
    void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
    /// @}
};

#endif