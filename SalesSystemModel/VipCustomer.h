/**
 * Project Untitled
 */

#pragma once

#ifndef _VIPCUSTOMER_H
#define _VIPCUSTOMER_H

#include "Customer.h"


using namespace System;
namespace SalesSystemModel {
	public ref class VipCustomer : public Customer {
	public:
		property double PercentDiscount;
		VipCustomer() {};
		VipCustomer(int id, String^ username, String^ password, String^ name, String^ lastname, String^ dni, String^ genero, String^ birthDate, String^ status, int purcharseCount, int loyaltyPoints,array<Byte>^ photo,double percentDiscount) :
			Customer(id, username, password, name, lastname, dni, genero, birthDate, status, purcharseCount, loyaltyPoints, photo) {
			PercentDiscount = percentDiscount;
		};
	};
}

#endif //_VIPCUSTOMER_H