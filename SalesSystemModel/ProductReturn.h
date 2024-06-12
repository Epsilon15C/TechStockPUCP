/**
 * Project Untitled
 */

#pragma once

#ifndef _PRODUCTRETURN_H
#define _PRODUCTRETURN_H

using namespace System;

namespace SalesSystemModel {
    public ref class ProductReturn {
    public:
        property int Id;
        property int IdSale;
        property String^ Reason;
        property DateTime ReturndDate;
        property String^ State;
    };
} 
#endif //_PRODUCTRETURN_H