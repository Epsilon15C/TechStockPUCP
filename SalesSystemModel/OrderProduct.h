#pragma once

#ifndef _ORDERPRODUCT_H
#define _ORDERPRODUCT_H

using namespace System;

namespace SalesSystemModel {
	public ref class OrderProduct {
	public:
		property int Id;
		property int Quantity;
		property double SubTotal;
		OrderProduct() {};
		OrderProduct(int id, int quantity, double subTotal) {
			Id = id;
			Quantity = quantity;
			SubTotal = subTotal;
		}
	};
}
#endif //_ORDERPRODUCT_H

