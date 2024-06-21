#pragma once
#include "Product.h"

#ifndef _ORDERPRODUCT_H
#define _ORDERPRODUCT_H

using namespace System;

namespace SalesSystemModel {
	public ref class OrderProduct {
	public:
		property int Id;
		property int OrderId;
		property int ProductId;
		property int Quantity;
		property double SubTotal;

		OrderProduct() {};
		OrderProduct(int id, int orderId, int productId, int quantity, double subTotal) {
			Id = id;
			OrderId = orderId;
			ProductId = productId;
			Quantity = quantity;
			SubTotal = subTotal;
		}


		
	};
}
#endif //_ORDERPRODUCT_H

