#pragma once

#include "Base.h"

/*!
* Class that represents DB item Member (Player)
*/
ref class Member : public Base
{
	/* surname of concrete player set by client */
	System::String^ Surname;

public:
	Member()
		: Base()
	{
		Surname = gcnew System::String("");
	}

	Member(System::String^ name)
		: Base()
	{
		Name = name;
		Surname = gcnew System::String("");
	}

	Member(System::String^ name, System::String^ suranme)
		: Base()
	{
		Name = name;
		Surname = gcnew System::String(suranme);
	}

	System::String^ GetSurname()
	{
		return Surname;
	}

	void SetSurname(System::String^ suranme)
	{
		Surname = suranme;
	}
};
