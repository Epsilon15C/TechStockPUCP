/**
 * Project Untitled
 */
#pragma once

#ifndef _PRODUCTREVIEW_H
#define _PRODUCTREVIEW_H

using namespace System;

namespace SalesSystemModel {
    public ref class ProductReview {
    public:
        property int Id;
        property int Qualification;
        property  String^ Coment;
    };
}
#endif //_PRODUCTREVIEW_H