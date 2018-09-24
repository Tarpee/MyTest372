#pragma once
#include "Mars.h"

namespace second {


	class Mercury:public first::Mars
	{
	public:
		Mercury();
		~Mercury();
		void foof();
	};



}