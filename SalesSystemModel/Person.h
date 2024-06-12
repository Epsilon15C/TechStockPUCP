/**
 * Project Untitled
 */
#pragma once

#ifndef _PERSON_H
#define _PERSON_H
using namespace System;

namespace SalesSystemModel {
	[Serializable]
	public ref class Person {
	public:
		property int Id;
		property String^ Username;
		property String^ Password;
		property String^ Name;
		property String^ LastName;
		property String^ DNI;
		property String^ Genero;
		property String^ BirthDate;
		property String^ Status;
		Person();
		Person(int id, String^ username, String^ password, String^ name, 
			String^ lastName, String^ dni, String^ genero, String^ birthDate, String^ Status);

	};
}

#endif //_PERSON_H