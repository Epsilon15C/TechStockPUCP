/**
 * Project Untitled
 */

#pragma once


#ifndef _VOLTAGESOURCE_H
#define _VOLTAGESOURCE_H

#include "Product.h"



using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class VoltageSource : public Product {
    public:
       property  String^ Type;
       property double Voltage;
       property String^ Power;

       VoltageSource() {};
       VoltageSource(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ type, double voltage, String^ power) :
           Product(id, name, description, photo, price, stock) {
		   Type = type;
		   Voltage = voltage;
		   Power = power;
	   }
    };
}

#endif //_VOLTAGESOURCE_H