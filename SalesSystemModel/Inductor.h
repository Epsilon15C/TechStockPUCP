/**
 * Project Untitled
 */

#pragma once

#ifndef _INDUCTOR_H
#define _INDUCTOR_H

#include "Product.h"


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref  class Inductor : public Product {
    public:
       property  String^ Inductance;
       property  String^ Tolerance;
       property  String^ Type;
       Inductor() {};
       Inductor(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock, String^ inductance, String^ tolerance,  String^ type):
           Product(id, name, description, photo, price,stock) {
		   Inductance = inductance;
		   Tolerance = tolerance;
		   Type = type;
	   }
    };
}

#endif //_INDUCTOR_H