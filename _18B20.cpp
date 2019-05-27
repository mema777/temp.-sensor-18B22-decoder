#include "_18B20.h"

double _18B20_transmit(unsigned int val)
{   
	double out;
	if (val > 63488) {
		val = val - 63488;
		out = (val * 0.0625) - 128;
	}



	else if (val < 63488) {
		out = val *0.0625;
	}


	return out;
}
