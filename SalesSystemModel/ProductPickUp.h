/**
 * Project Untitled
 */

#pragma once

#ifndef _PRODUCTPICKUP_H
#define _PRODUCTPICKUP_H

using namespace System;

namespace SalesSystemModel {
    public ref class ProductPickUp {
    public:
       property  int Id;
       property String^ State;
       property DateTime PickUpDate;
       property  DateTime PickUpHour;
    };
}
#endif //_PRODUCTPICKUP_H