#pragma once

#ifndef _PAYMENTYAPE_H
#define _PAYMENTYAPE_H

using namespace System;

using namespace System::Collections::Generic;

namespace SalesSystemModel {
	[Serializable]
		public ref class PaymentYape {
		public:
			property int Id;
			property String^ Text;

			PaymentYape() {};
			PaymentYape(int id, String^ text) {
				Id = id;
				Text = text;
			}


	};
}
#endif //_PAYMENTYAPE_H
