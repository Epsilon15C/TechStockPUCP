/**
 * Project Untitled
 */

#pragma once

#ifndef _PROVIDER_H
#define _PROVIDER_H


using namespace System;

namespace SalesSystemModel {
    [Serializable]
    public ref class Provider {
    public:
       property int Id;
       property  String^ Name;
       property String^ RUC;
       property String^ Account;
       property String^ Website;
       property String^ PhoneNumber;
    };
} 
#endif //_PROVIDER_H