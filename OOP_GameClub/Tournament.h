#pragma once

#include "Base.h"

/*!
* Class that represents DB item Tournament
* Connects tournament and game which is played in this tournament
*/

ref class Tournament : public Base
{
	/* unique identifier of Game object */
	System::Guid GameId;

public:
	Tournament()
		: Base()
	{
		GameId = System::Guid::NewGuid();
	}

	Tournament(System::String^ name)
		: Base()
	{
		Name = name;
		GameId = System::Guid::NewGuid();
	}

	Tournament(System::String^ name, System::Guid game)
		: Base()
	{
		Name = name;
		GameId = game;
	}

	System::Guid GetGameId()
	{
		return GameId;
	}

	void SetGameId(System::Guid game)
	{
		GameId = game;
	}
};