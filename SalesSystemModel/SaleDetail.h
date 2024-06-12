/**
 * Project Untitled
 */

#pragma once

#ifndef _SALEDETAIL_H
#define _SALEDETAIL_H

using namespace System;

namespace SalesSystemModel {
    public ref class SaleDetail {
    public:
       property int Id;
       property double UnitPrice;
       property double SubTotal;
       property int Quantity;
    };
} 
#endif //_SALEDETAIL_H