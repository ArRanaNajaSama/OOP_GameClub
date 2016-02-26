#pragma once

#include "Base.h"

/*!
* Class that represents DB item Game
*/
ref class Game : public Base
{
public:
	Game()
		: Base()
	{ }

	Game(System::String^ name)
		: Base()
	{
		Name = name;
	}
};

