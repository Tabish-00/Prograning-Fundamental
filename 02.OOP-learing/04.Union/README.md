# C++ Unions

In C++, a union is a user-defined datatype in which we can define members of different types of data types just like structures. But one thing that makes it different from structures is that the member variables in a union share the same memory location, unlike a structure that allocates memory separately for each member variable. The size of the union is equal to the size of the largest data type.

Memory space can be used by one member variable at one point in time, which means if we assign value to one member variable, it will automatically deallocate the other member variable stored in the memory which will lead to loss of data.Reade more: https://www.geeksforgeeks.org/cpp-unions/