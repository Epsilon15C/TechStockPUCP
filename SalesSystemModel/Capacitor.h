/**
 * Project Untitled
 */
#pragma once


#ifndef _CAPACITOR_H
#define _CAPACITOR_H

#include "Product.h"


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref  class Capacitor : public Product {
    public:
        property String^ Capacitance;
        property String^ Tolerance;
        property double VoltageRated;
        Capacitor() {};
        Capacitor(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ capacitance, String^ tolerance, double voltageRated):
            Product(id, name, description, photo, price,stock) {
			Capacitance = capacitance;
			Tolerance = tolerance;
			VoltageRated = voltageRated;
		}
    };
}
#endif //_CAPACITOR_H