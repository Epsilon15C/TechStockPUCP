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
       property  double TotalPrice;
       property int TotalItems;
       property  DateTime DateSale;
       property DateTime HourSale;
       property String^ PaymentMethod;
       property String^ RUC;
    };
}
#endif //_SALE_H