#pragma once

#include "Base.h"

/*!
* Class that represents DB item Participant
* Connects player and tournament in which he participates
*/
ref class Participant : public Base
{
	/* unique identifier of Tournament object */
	System::Guid TournamentId;
	/* unique identifier of Member object */
	System::Guid MemberId;

public:
	Participant()
		: Base()
	{
		TournamentId = System::Guid::NewGuid();
		MemberId = System::Guid::NewGuid();
	}

	Participant(System::String^ name)
		: Base()
	{
		Name = name;
		TournamentId = System::Guid::NewGuid();
		MemberId = System::Guid::NewGuid();
	}

	Participant(System::String^ name, System::Guid tournament)
		: Base()
	{
		Name = name;
		TournamentId = tournament;
		MemberId = System::Guid::NewGuid();
	}

	Participant(System::String^ name, System::Guid tournament, System::Guid member)
		: Base()
	{
		Name = name;
		TournamentId = tournament;
		MemberId = System::Guid::NewGuid();
	}

	System::Guid GetTournamentId()
	{
		return TournamentId;
	}

	void SetTournament(System::Guid tournament)
	{
		TournamentId = tournament;
	}

	System::Guid GetMemberId()
	{
		return MemberId;
	}

	void SetMemberId(System::Guid member)
	{
		MemberId = member;
	}
};