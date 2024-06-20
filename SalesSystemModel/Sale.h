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
    };
}
#endif //_SALE_H