/**
 * Project Untitled
 */

#pragma once

#ifndef _PROFILEPREFERENCES_H
#define _PROFILEPREFERENCES_H

using namespace System;

namespace SalesSystemModel {
    public ref class ProfilePreferences {
    public:
        property String^ NotificatiosLevel;
        property String^ ThemeColor;
        property String^ ProfileInformationVisibility;
    };
}
#endif //_PROFILEPREFERENCES_H