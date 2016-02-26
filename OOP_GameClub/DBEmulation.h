#pragma once
#using <System.Xml.dll>
#include "Game.h"
#include "Member.h"
#include "Participant.h"
#include "Tournament.h"

/*!
* Class that represents DB
* includes methods for read/write in xml file
* includes methods for object serialisation/deserialisation
* includes methods for add new object item
* includes fields that stores objects that represents items in DB
*/

ref class DBEmulation
{
	/* Dictionaries that contain unique identifier of object as key and concrete object as value */
	System::Collections::Generic::Dictionary<System::Guid, Game^>^ GameItems;
	System::Collections::Generic::Dictionary<System::Guid, Member^>^ MemberItems;
	System::Collections::Generic::Dictionary<System::Guid, Participant^>^ ParticipantItems;
	System::Collections::Generic::Dictionary<System::Guid, Tournament^>^ TournamentItems;

public:
	DBEmulation();

	void Save();
	void Load();

	void AddNewItem(Game^ game);
	void AddNewItem(Member^ member);
	void AddNewItem(Participant^ participant);
	void AddNewItem(Tournament^ tournament);

	/* getters that allows to access item storages */
	System::Collections::Generic::Dictionary<System::Guid, Game^>^ GetGameItems();
	System::Collections::Generic::Dictionary<System::Guid, Member^>^ GetMemberItems();
	System::Collections::Generic::Dictionary<System::Guid, Participant^>^ GetParticipantItems();
	System::Collections::Generic::Dictionary<System::Guid, Tournament^>^ GetTournamentItems();

private:
	System::Xml::XmlNode^ GameSerialisation(System::Xml::XmlDocument^ doc, Game^ game);
	System::Xml::XmlNode^ MemberSerialisation(System::Xml::XmlDocument^ doc, Member^ member);
	System::Xml::XmlNode^ ParticipantSerialisation(System::Xml::XmlDocument^ doc, Participant^ participant);
	System::Xml::XmlNode^ TournamentSerialisation(System::Xml::XmlDocument^ doc, Tournament^ tournament);

	Game^ GameDeserialisation(System::Xml::XmlNode^ game);
	Member^ MemberDeserialisation(System::Xml::XmlNode^ member);
	Participant^ ParticipantDeserialisation(System::Xml::XmlNode^ participant);
	Tournament^ TournamentDeserialisation(System::Xml::XmlNode^ tournament);
};

