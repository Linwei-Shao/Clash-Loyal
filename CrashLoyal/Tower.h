#pragma once

#include "Mob.h"
#include "Building.h"

class Mob_Tower : public Mob
{
public:
	virtual float GetSpeed() const { return 0.f; }
	virtual float GetSize() const { return 0.5f; }
	virtual float GetMass() const { return 100000.f; }
	const char* GetDisplayLetter() const { return "T"; }
	Point pos = this->pos;
};