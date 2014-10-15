#ifndef THRUSTSCAN_ACTIRE_PARALLEL_HPP
#define THRUSTSCAN_ACTIRE_PARALLEL_HPP

#include <thrust/host_vector.h>
#include "actire_parallel_device.hpp"

namespace thrustscan{

struct node_data{
	thrust::device_ptr<char> keyword;
	thrust::device_ptr<int>  state;
	thrust::device_ptr<int>  next_state;
};

class actire_parallel{



};



}

#endif /* THRUSTSCAN_ACTIRE_PARALLEL_HPP */ 
