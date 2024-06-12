/**
 * Project Untitled
 */

#pragma once

#ifndef _BREADBOARD_H
#define _BREADBOARD_H

#include "Product.h"


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Breadboard : public Product {
    public:
        property int TiePointsNumber;
        Breadboard() {};
        Breadboard(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, int tiepointsNumber):
            Product(id, name, description, photo, price,stock) {
            TiePointsNumber = tiepointsNumber;

        };
    };
}

#endif //_BREADBOARD_H