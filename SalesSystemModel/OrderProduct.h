#pragma once
#include "Product.h"

#ifndef _ORDERPRODUCT_H
#define _ORDERPRODUCT_H

using namespace System;

namespace SalesSystemModel {
	public ref class OrderProduct {
	public:
		property int Id;
		property int Quantity;
		property double SubTotal;
		property Product^ Product;
		/*OrderProduct() {};
		OrderProduct(int id, int quantity, double subTotal, Product^ product) {
			Id = id;
			Quantity = quantity;
			SubTotal = subTotal;
		}*/
	};
}
#endif //_ORDERPRODUCT_H

