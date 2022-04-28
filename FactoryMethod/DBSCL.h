#pragma once
#include "Giong.h"
#include "ga.h"
#include "vit.h"
#include "lon.h"
#include "GiongVatNuoiFactory.h"
class DBSCL : public GiongVatNuoiFactory
{
public:
	Giong* chonGiong()
	{
		//int n = rand() % (3 - 1 + 1) + 1;
	int count = 0;
		switch (count)
		{
		case 0:
			count++;
			return new ga();
		case 2:
			count++;
			return new vit();
		case 3:
			count++;
			return new lon();
		default:
			return NULL;

		}
	}
};

