/**
 * Project Untitled
 */
#pragma once

#ifndef _PRODUCT_H
#define _PRODUCT_H

using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Product {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property array<Byte>^ Photo;
        property  double Price;
        property int Stock;
        Product();
        Product(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock);

    };
}

#endif //_PRODUCT_H