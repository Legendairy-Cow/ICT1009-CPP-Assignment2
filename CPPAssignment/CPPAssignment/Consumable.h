#pragma once

#include "Item.h"

class Consumable : public Item
{
private:

public:
	Consumable();
		virtual ~Consumable();

	void generateItem();

};

