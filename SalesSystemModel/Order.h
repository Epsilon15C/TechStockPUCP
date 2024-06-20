#pragma once

#include "OrderProduct.h"
#include "Person.h"

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;

using namespace System::Collections::Generic;

namespace SalesSystemModel {
	public ref class Order {
	public:
		property int Id;
		property String^ Date;
		property double TotalAmount;

		property String^ Status;
		property Person^ Person;
		property List<OrderProduct^>^ OrderProduct;

		/*
		Order() {};
		Order(int id, String^ date, double totalAmount, String^ status) {
			Id = id;
			Date = date;
			TotalAmount = totalAmount;
			Status = status;
		}*/

	};
}
#endif //_ORDER_H

