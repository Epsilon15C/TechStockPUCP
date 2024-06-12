/**
 * Project Untitled
 */
#pragma once


#ifndef _OFFER_H
#define _OFFER_H

using namespace System;

namespace SalesSystemModel {
    public ref class Offer {
    public:
       property DateTime StarTime;
       property DateTime EndTime;
       property bool Status;
    };
}
#endif //_OFFER_H