#include "DBEmulation.h"

using namespace System;
using namespace System::Xml;
using namespace System::Collections::Generic;

DBEmulation::DBEmulation()
{
	GameItems = gcnew Dictionary<System::Guid, Game^>();
	MemberItems = gcnew Dictionary<System::Guid, Member^>();
	ParticipantItems = gcnew Dictionary<System::Guid, Participant^>();
	TournamentItems = gcnew Dictionary<System::Guid, Tournament^>();
	Console::Write(L"Hello ");
}

void DBEmulation::Save()
{
	XmlDocument ^ doc = gcnew XmlDocument;
	doc->LoadXml(L"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
		L"<DBEmulation>"
		L"</DBEmulation>");

	XmlElement^ games = doc->CreateElement("Games");
	for each(KeyValuePair<System::Guid, Game^>^ item in GameItems)
	{
		games->AppendChild(GameSerialisation(doc, item->Value));
	}
	doc->DocumentElement->AppendChild(games);

	XmlElement^ members = doc->CreateElement("Members");
	for each(KeyValuePair<System::Guid, Member^>^ item in MemberItems)
	{
		members->AppendChild(MemberSerialisation(doc, item->Value));
	}
	doc->DocumentElement->AppendChild(members);

	XmlElement^ participants = doc->CreateElement("Participants");
	for each(KeyValuePair<System::Guid, Participant^>^ item in ParticipantItems)
	{
		participants->AppendChild(ParticipantSerialisation(doc, item->Value));
	}
	doc->DocumentElement->AppendChild(participants);

	XmlElement^ tournaments = doc->CreateElement("Tournaments");
	for each(KeyValuePair<System::Guid, Tournament^>^ item in TournamentItems)
	{
		tournaments->AppendChild(TournamentSerialisation(doc, item->Value));
	}
	doc->DocumentElement->AppendChild(tournaments);

	doc->Save("DB.xml");
}

void DBEmulation::Load()
{
	XmlDocument^ xmlDoc = gcnew XmlDocument();
	xmlDoc->Load("DB.xml");

	GameItems->Clear();
	XmlNodeList^ games = xmlDoc->GetElementsByTagName("Games");
	int gamesNumber = games->Count;
	for (int i = 0; i< gamesNumber; ++i)
	{
		XmlNodeList^ game = games->Item(i)->ChildNodes;
		int gameNumber = game->Count;
		for (int j = 0; j < gameNumber; ++j)
		{
			XmlNode^ item = game->Item(j);
			Game^ g = GameDeserialisation(item);
			GameItems[g->GetId()] = g;
		}
	}
	Console::WriteLine("%d games loaded", GameItems->Count);

	MemberItems->Clear();
	XmlNodeList^ members = xmlDoc->GetElementsByTagName("Members");
	int membersNumber = members->Count;
	for (int i = 0; i< membersNumber; ++i)
	{
		XmlNodeList^ member = members->Item(i)->ChildNodes;
		int memberNumber = member->Count;
		for (int j = 0; j < memberNumber; ++j)
		{
			XmlNode^ item = member->Item(j);
			Member^ m = MemberDeserialisation(item);
			MemberItems[m->GetId()] = m;
		}
	}
	Console::WriteLine("%d members loaded", MemberItems->Count);

	ParticipantItems->Clear();
	XmlNodeList^ participants = xmlDoc->GetElementsByTagName("Participants");
	int participantsNumber = participants->Count;
	for (int i = 0; i< participantsNumber; ++i)
	{
		XmlNodeList^ participant = participants->Item(i)->ChildNodes;
		int participantNumber = participant->Count;
		for (int j = 0; j < participantNumber; ++j)
		{
			XmlNode^ item = participant->Item(j);
			Participant^ p = ParticipantDeserialisation(item);
			ParticipantItems[p->GetId()] = p;
		}
	}
	Console::WriteLine("%d participants loaded", ParticipantItems->Count);

	TournamentItems->Clear();
	XmlNodeList^ tournaments = xmlDoc->GetElementsByTagName("Tournaments");
	int tournamentsNumber = tournaments->Count;
	for (int i = 0; i< tournamentsNumber; ++i)
	{
		XmlNodeList^ tournament = tournaments->Item(i)->ChildNodes;
		int tournamentNumber = tournament->Count;
		for (int j = 0; j < tournamentNumber; ++j)
		{
			XmlNode^ item = tournament->Item(j);
			Tournament^ t = TournamentDeserialisation(item);
			TournamentItems[t->GetId()] = t;
		}
	}
	Console::WriteLine("%d tournaments loaded", TournamentItems->Count);
}

void DBEmulation::AddNewItem(Game^ game)
{
	GameItems[game->GetId()] = game;
}

void DBEmulation::AddNewItem(Member^ member)
{
	MemberItems[member->GetId()] = member;
}

void DBEmulation::AddNewItem(Participant^ participant)
{
	ParticipantItems[participant->GetId()] = participant;
}

void DBEmulation::AddNewItem(Tournament^ tournament)
{
	TournamentItems[tournament->GetId()] = tournament;
}

void DBEmulation::RemoveItem(System::Guid tournamentId)
{
    GameItems->Remove(TournamentItems[tournamentId]->GetGameId());
    
    List<Guid>^ memberList = GetMembersByTournament(tournamentId);
    for each (Guid item in memberList)
    {
        MemberItems->Remove(item);
    }
    
	//Filtering ids that will be removed
	List<Guid>^ idsToRemove = gcnew List<Guid>();
	for each(KeyValuePair<System::Guid, Participant^>^ item in ParticipantItems)
	{
        if (item->Value->GetTournamentId() == tournamentId) {
			idsToRemove->Add(item->Key);
        }
    }

	for each(Guid id in idsToRemove)
	{
		ParticipantItems->Remove(id);
	}
    
    TournamentItems->Remove(tournamentId);
}

System::Collections::Generic::Dictionary<System::Guid, Game^>^ DBEmulation::GetGameItems()
{
	return GameItems;
}

System::Collections::Generic::Dictionary<System::Guid, Member^>^ DBEmulation::GetMemberItems()
{
	return MemberItems;
}

System::Collections::Generic::Dictionary<System::Guid, Participant^>^ DBEmulation::GetParticipantItems()
{
	return ParticipantItems;
}

System::Collections::Generic::Dictionary<System::Guid, Tournament^>^ DBEmulation::GetTournamentItems()
{
	return TournamentItems;
}

System::Guid DBEmulation::GetTournamentByMember(System::Guid memberId)
{
	for each(KeyValuePair<System::Guid, Participant^>^ item in ParticipantItems)
	{
        if (item->Value->GetMemberId() == memberId)
        {
            return item->Value->GetTournamentId();
        }
	}

	return Guid::NewGuid();
}

System::Collections::Generic::List<System::Guid>^ DBEmulation::GetMembersByTournament(System::Guid turnamentId)
{
	List<Guid>^ result = gcnew List<Guid>();
	for each(KeyValuePair<System::Guid, Participant^>^ item in ParticipantItems)
	{
        if (item->Value->GetTournamentId() == turnamentId)
        {
			result->Add(item->Value->GetMemberId());
        }
	}
	return result;
}

System::Xml::XmlNode^ DBEmulation::GameSerialisation(System::Xml::XmlDocument^ doc, Game^ game)
{
	XmlNode^ item = doc->CreateElement("Game");
	XmlElement^ id = doc->CreateElement("Id");
	id->InnerText = game->GetId().ToString();
	XmlElement^ name = doc->CreateElement("Name");
	name->InnerText = game->GetName();
	item->AppendChild(id);
	item->AppendChild(name);
	return item;
}

System::Xml::XmlNode^ DBEmulation::MemberSerialisation(System::Xml::XmlDocument^ doc, Member^ member)
{
	XmlElement^ item = doc->CreateElement("Member");
	XmlElement^ id = doc->CreateElement("Id");
	id->InnerText = member->GetId().ToString();
	XmlElement^ name = doc->CreateElement("Name");
	name->InnerText = member->GetName();
	XmlElement^ surname = doc->CreateElement("Surname");
	surname->InnerText = member->GetSurname();
	item->AppendChild(id);
	item->AppendChild(name);
	item->AppendChild(surname);
	return item;
}

System::Xml::XmlNode^ DBEmulation::ParticipantSerialisation(System::Xml::XmlDocument^ doc, Participant^ participant)
{
	XmlElement^ item = doc->CreateElement("Participant");
	XmlElement^ id = doc->CreateElement("Id");
	id->InnerText = participant->GetId().ToString();
	XmlElement^ tour = doc->CreateElement("Tournament");
	tour->InnerText = participant->GetTournamentId().ToString();
	XmlElement^ member = doc->CreateElement("Member");
	member->InnerText = participant->GetMemberId().ToString();
	item->AppendChild(id);
	item->AppendChild(tour);
	item->AppendChild(member);
	return item;
}

System::Xml::XmlNode^ DBEmulation::TournamentSerialisation(System::Xml::XmlDocument^ doc, Tournament^ tournament)
{
	XmlElement^ item = doc->CreateElement("Tournament");
	XmlElement^ id = doc->CreateElement("Id");
	id->InnerText = tournament->GetId().ToString();
	XmlElement^ name = doc->CreateElement("Name");
	name->InnerText = tournament->GetName();
	XmlElement^ game = doc->CreateElement("Game");
	game->InnerText = tournament->GetGameId().ToString();
	item->AppendChild(id);
	item->AppendChild(name);
	item->AppendChild(game);
	return item;
}

Game^ DBEmulation::GameDeserialisation(System::Xml::XmlNode^ game)
{
	XmlNodeList^ fields = game->ChildNodes;
	String^ name;
	Guid id;
	for (int i = 0; i < fields->Count; ++i) {
		XmlNode^ item = fields->Item(i);
		if (item->Name == "Name") {
			name = gcnew String(item->InnerText);
		} else if (item->Name == "Id") {
			id = Guid(item->InnerText);
		}
	}

	Game ^g = gcnew Game(name);
	g->SetId(id);
	return g;
}

Member^ DBEmulation::MemberDeserialisation(System::Xml::XmlNode^ member)
{
	XmlNodeList^ fields = member->ChildNodes;
	String^ name;
	String^ surname;
	Guid id;
	for (int i = 0; i < fields->Count; ++i) {
		XmlNode^ item = fields->Item(i);
		if (item->Name == "Name") {
			name = gcnew String(item->InnerText);
		} else if (item->Name == "Id") {
			id = Guid(item->InnerText);
		} else if (item->Name == "Surname") {
			surname = gcnew String(item->InnerText);
		}
	}

	Member ^m = gcnew Member(name, surname);
	m->SetId(id);
	return m;
}

Participant^ DBEmulation::ParticipantDeserialisation(System::Xml::XmlNode^ participant)
{
	XmlNodeList^ fields = participant->ChildNodes;
	Guid tournament;
	Guid member;
	Guid id;
	for (int i = 0; i < fields->Count; ++i) {
		XmlNode^ item = fields->Item(i);
		if (item->Name == "Id") {
			id = Guid(item->InnerText);
		} else if (item->Name == "Tournament") {
			tournament = Guid(item->InnerText);
		} else if (item->Name == "Member") {
			member = Guid(item->InnerText);
		}
	}

	Participant ^p = gcnew Participant(tournament, member);
	p->SetId(id);
	return p;
}

Tournament^ DBEmulation::TournamentDeserialisation(System::Xml::XmlNode^ tournament)
{
	XmlNodeList^ fields = tournament->ChildNodes;
	String^ name;
	Guid game;
	Guid id;
	for (int i = 0; i < fields->Count; ++i) {
		XmlNode^ item = fields->Item(i);
		if (item->Name == "Name") {
			name = gcnew String(item->InnerText);
		}
		else if (item->Name == "Id") {
			id = Guid(item->InnerText);
		}
		else if (item->Name == "Game") {
			game = Guid(item->InnerText);
		}
	}

	Tournament ^t = gcnew Tournament(name, game);
	t->SetId(id);
	return t;
}

