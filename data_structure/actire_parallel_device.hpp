#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/sort.h>
#include <thrust/copy.h>

namespace thrustscan{

bool search_parallel(thrust::host_vector<char> & symbol,
										 thrust::host_vector<int>  & state,
										 thrust::host_vector<char> & buffer);
}
