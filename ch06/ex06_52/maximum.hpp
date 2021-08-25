/*
 ***************************************************
 *
 * minimum.hpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.52 (Function Template maximum)
 * Created: Aug 25,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/

template <typename T>
T maximum(T value1, T value2) {
	if ( value1 > value2) {
		return value1;
	}
	else {
		return value2;
	}
}
