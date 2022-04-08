#pragma once

#include "Item.h"

class Armour : public Item
{
private:
	int type;
public:
	Armour();
	virtual ~Armour();

	//Functions
	std::string toString();

	//Accessors
	inline const int& getType() const { return this->type; }

	void generateArmour();
};