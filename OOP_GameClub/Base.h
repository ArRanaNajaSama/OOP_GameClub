#pragma once

/*!
* Base class for item in DB
*/
ref class Base
{
protected:
	/* unique identifier of object */
	System::Guid Id;
	/* name of concrete object set by client */
	System::String^ Name;

public:
	Base()
	{
		Id = System::Guid::NewGuid();
		Name = gcnew System::String("");
	}

	System::Guid GetId()
	{
		return Id;
	}

	void SetId(System::Guid id)
	{
		Id = id;
	}

	System::String^ GetName()
	{
		return Name;
	}

	void SetName(System::String^ name)
	{
		Name = name;
	}

};