#pragma once

#include <math.h>       /* log2 */
#include "helper_functions.h"

class decoder
{
private:
	map<uint32_t, vector<state>> _automata;
public:
	decoder(void);
	~decoder(void);
	decoder(map<uint32_t, vector<state>> automata);

	void DecodeSequential(vector<uint32_t> bus);
	void DecodeParallel();
};

