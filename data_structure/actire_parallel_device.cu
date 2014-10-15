#include <thrust/device_vector.h>

#include "actire_parallel_device.hpp"

namespace thrustscan{

bool search_parallel(thrust::host_vector<char> & symbol,
										 thrust::host_vector<int>  & state,
										 thrust::host_vector<char> & buffer){


			thrust::device_vector<char> d_symbol = symbol;
			thrust::sort(d_symbol.begin(), d_symbol.end());
		  thrust::copy(d_symbol.begin(), d_symbol.end(), symbol.begin());


}



}


