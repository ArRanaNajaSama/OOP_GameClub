#pragma once

/*!
* Class that represents DB item Participant
* Connects player and tournament in which he participates
*/
ref class Participant
{
	/* unique identifier of object */
	System::Guid Id;
	/* unique identifier of Tournament object */
	System::Guid TournamentId;
	/* unique identifier of Member object */
	System::Guid MemberId;

public:
	Participant(System::Guid tournament, System::Guid member)
	{
        Id = System::Guid::NewGuid();
		TournamentId = tournament;
		MemberId = member;
	}

    System::Guid GetId()
	{
		return Id;
	}
    
    void SetId(System::Guid id)
	{
		Id = id;
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