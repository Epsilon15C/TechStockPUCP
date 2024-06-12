/**
 * Project Untitled
 */

#include "pch.h"
#include "Person.h"

/**
 * Person implementation
 */

SalesSystemModel::Person::Person()
{
    //throw gcnew System::NotImplementedException();
}

SalesSystemModel::Person::Person(int id, String^ username, String^ password, String^ name, 
    String^ lastName, String^ dni, String^ genero, String^ birthDate, String^ status)
{
    //throw gcnew System::NotImplementedException();
    this->Id = id;
    this->Username = username;
    this->Password = password;
    this->Name = name;
    this->LastName = lastName;
    this->DNI = dni;
    this->Genero = genero;
    this->BirthDate = birthDate;
    this->Status = status;

}
