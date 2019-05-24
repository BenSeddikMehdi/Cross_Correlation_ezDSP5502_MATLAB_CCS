#include <stdio.h>
#include "CrossCorr.h"



int main(int argc, char const *argv[])
{
	xcorr(shiftedSinusPulse,pureSinus);
    //xcorr(a,b);
	return 0;
}
