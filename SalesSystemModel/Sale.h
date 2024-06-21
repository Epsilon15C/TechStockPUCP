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
       property String^ RUC;
       property  double TotalAmountWithoutTax;
       property  double TotalAmountWithTax;
       property int OrderId;

	   Sale() {};
	   Sale(int id, String^ ruc, double totalAmountWithoutTax, double totalAmountWithTax, int orderId) {
		   Id = id;
		   RUC = ruc;
		   TotalAmountWithoutTax = totalAmountWithoutTax;
		   TotalAmountWithTax = totalAmountWithTax;
		   OrderId = orderId;
	   }


      
    };
}
#endif //_SALE_H