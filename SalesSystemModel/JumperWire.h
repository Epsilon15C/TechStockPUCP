/**
 * Project Untitled
 */
#pragma once

#ifndef _JUMPERWIRE_H
#define _JUMPERWIRE_H

#include "Product.h"


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class JumperWire : public Product {
    public:
        property String^ ConectionType;
        JumperWire() {};
        JumperWire(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ conectionType):
            Product(id, name, description, photo, price,stock) {
			ConectionType = conectionType;
		}

    };
} 
#endif //_JUMPERWIRE_H