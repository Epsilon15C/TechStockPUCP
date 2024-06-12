/**
 * Project Untitled
 */

#pragma once

#ifndef _DIODE_H
#define _DIODE_H

#include "Product.h"



using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Diode : public Product {
    public:
       property double VRMax;
       Diode() {};
       Diode(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, double vRMax):
           Product(id, name, description, photo, price,stock){
           VRMax = vRMax;
	   }
    };
}
#endif //_DIODE_H