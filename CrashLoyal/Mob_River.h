#pragma once

#include "Mob.h"

class Mob_River :public Mob
{
public:
	virtual int GetMaxHealth() const { return INT_MAX; }
	virtual float GetSpeed() const { return 0.f; }
	virtual float GetSize() const { return 1.f; }
	virtual float GetMass() const { return 10000.0f; }
	virtual int GetDamage() const { return 0; }
	virtual float GetAttackTime() const { return 2.5f; }
	const char* GetDisplayLetter() const { return "S"; }
};