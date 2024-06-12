/**
 * Project Untitled
 */

#pragma once

#ifndef _STOCK_H
#define _STOCK_H

using namespace System;

namespace SalesSystemModel {
    public ref class Stock {
    public:
       property int AvailableQuantity;
       property  int IdealQuantity;

    };
}
#endif //_STOCK_H