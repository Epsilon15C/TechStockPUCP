/**
 * Project Untitled
 */

#pragma once

#ifndef _SUPPLYDETAIL_H
#define _SUPPLYDETAIL_H

using namespace System;

namespace SalesSystemModel {
    public ref class SupplyDetail {
    public:
        property int Id;
        property  int ItemsNumber;
        property double UnitPrice;
        property double Subtotal;
    };
}
#endif //_SUPPLYDETAIL_H