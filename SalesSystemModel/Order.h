#pragma once

#include "OrderProduct.h"
#include "Person.h"

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;

using namespace System::Collections::Generic;

namespace SalesSystemModel {
	[Serializable]
	public ref class Order {
	public:
		property int Id;
		property String^ Date;
		property double TotalAmount;
		property int PersonId;
		property String^ Status;

		Order() {};
		Order(int id, String^ date, double totalAmount, int personId, String^ status) {
			Id = id;
			Date = date;
			TotalAmount = totalAmount;
			PersonId = personId;
			Status = status;
		}

	};
}
#endif //_ORDER_H

