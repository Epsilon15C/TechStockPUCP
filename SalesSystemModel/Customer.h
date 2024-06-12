/**
 * Project Untitled
 */
#pragma once

#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include "Person.h"

using namespace System;

namespace SalesSystemModel {
	[Serializable]
	public ref class Customer : public Person {
	public:
		
		property int PurchaseCount;
		property int LoyaltyPoints;
		property array<Byte>^ Photo;
		Customer() {};
		Customer(int id, String^ username, String^ password, String^ name, String^ lastName, String^ dni, String^ gender, String^ birthDate, String^ status, int purchaseCount, int loyaltyPoints, array<Byte>^ photo) :
			Person(id, username, password, name, lastName, dni, gender, birthDate, status) {
			PurchaseCount = purchaseCount;
			LoyaltyPoints = loyaltyPoints;
			Photo = photo;
		};
	};
}
#endif //_CUSTOMER_H