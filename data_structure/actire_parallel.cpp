#include "actire_parallel.hpp"


int main(){

thrust::host_vector<char> buffer;
thrust::host_vector<char> symbol;
thrust::host_vector<int>  state;

symbol.push_back('a');
symbol.push_back('c');
symbol.push_back('b');
symbol.push_back('z');
symbol.push_back('f');

thrustscan::search_parallel(symbol, state, buffer);

thrust::copy(symbol.begin(), 
symbol.end(), 
std::ostream_iterator<char>(std::cout, "\n"));

}
