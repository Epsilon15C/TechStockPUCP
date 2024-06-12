/**
 * Project Untitled
 */
#pragma once


#ifndef _RESISTOR_H
#define _RESISTOR_H

#include "Product.h"


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Resistor : public Product {
    public:
        property String^ Resistance;
        property String^ Tolerance;
        property String^ Power;
        Resistor() {};
        Resistor (int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ resistance,String^ tolerance, String^ power) :
            Product(id, name, description, photo, price, stock) {
            Resistance = resistance;
            Tolerance = tolerance;
            Power = power;

		};
    };
} 
#endif //_RESISTOR_H