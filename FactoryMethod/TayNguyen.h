#pragma once
#include "Giong.h"
#include "bo.h"
#include "voi.h"
#include "GiongVatNuoiFactory.h"
class TayNguyen: public GiongVatNuoiFactory
{
public:
	Giong *chonGiong()
	{
		int n = rand()%(2 - 1 + 1) + 1;
		switch (n)
		{
		case 0:
			return new bo();
		case 1:
			return  new voi();
		default:
			return NULL;
		
		}
	}
};

