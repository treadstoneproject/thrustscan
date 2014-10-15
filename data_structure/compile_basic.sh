nvcc -O2 -c  actire_parallel_device.cu
g++ -O2 -c actire_parallel.cpp actire_parallel.hpp  -I/home/chatsiri/Downloads/cuda4.2.9/cuda/include/  -I/home/chatsiri/workspacecpp/thrust
nvcc -o actire_test actire_parallel.o actire_parallel_device.o
