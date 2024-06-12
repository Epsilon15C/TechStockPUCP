/**
 * Project Untitled
 */
#pragma once

#ifndef _SWITCH_H
#define _SWITCH_H

#include "Product.h"



using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Switch : public Product {
    public:
        property String^ Type;
        Switch() {};
        Switch(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ type):
            Product(id, name, description, photo, price, stock) {
			Type = type;
		}
    };
} 
#endif //_SWITCH_H