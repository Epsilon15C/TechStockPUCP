/**
 * Project Untitled
 */

#pragma once
#ifndef _STOREOPERATOR_H
#define _STOREOPERATOR_H

#include "Person.h"


using namespace System;

namespace SalesSystemModel {
    public ref class StoreOperator : public Person {
    public:
       property  double Salary;
       property  String^ PhoneNumber;
       StoreOperator() {};
       StoreOperator(int id, String^ username, String^ password, String^ name,
            String^ lastname, String^ dni, String^ genero, String^ birthDate, String^ status,
            double salary, String^ phoneNumber) : Person(id, username, password, name, lastname, dni, genero, birthDate, status) {
            Salary = salary;
            PhoneNumber = phoneNumber;
        };
    };
} 
#endif //_STOREOPERATOR_H