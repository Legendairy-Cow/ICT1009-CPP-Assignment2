#pragma once

#include "Item.h"

class Weapon : public Item
{
private:

public:
	Weapon();
		virtual ~Weapon();

	virtual void generateItem();


};