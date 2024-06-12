/**
 * Project Untitled
 */

#include "pch.h"
#include "Product.h"

/**
 * Product implementation
 */

SalesSystemModel::Product::Product()
{
   // throw gcnew System::NotImplementedException();
}

SalesSystemModel::Product::Product(int id, String^ name, String^ description, array<Byte>^ photo, double price, int stock)
{
	//throw gcnew System::NotImplementedException();
	this ->Id = id;
	this ->Name = name;
	this ->Description = description;
	this ->Photo = photo;
	this ->Price = price;
	this-> Stock = stock;

}
