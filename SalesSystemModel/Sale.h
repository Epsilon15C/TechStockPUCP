/**
 * Project Untitled
 */

#pragma once

#ifndef _SALE_H
#define _SALE_H

using namespace System;

namespace SalesSystemModel {
    public ref class Sale {
    public:
       property  int Id;
       property  double TotalAmountWithoutTax;
       property  double TotalAmountWithTax;
       property String^ RUC;
       property int OrderId;

	   Sale() {};
	   Sale(int id, double totalAmountWithoutTax, double totalAmountWithTax, String^ ruc, int orderId) {
		   Id = id;
		   TotalAmountWithoutTax = totalAmountWithoutTax;
		   TotalAmountWithTax = totalAmountWithTax;
		   RUC = ruc;
		   OrderId = orderId;
	   }

    };
}
#endif //_SALE_H