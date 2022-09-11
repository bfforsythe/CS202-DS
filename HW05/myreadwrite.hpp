#pragma once
#ifndef MYREADWRITE_HPP
#define MYREADWRITE_HPP

#include <fstream>


template<typename T, typename U>

void myWrite(T & x, U y) {

	x.write(reinterpret_cast<const char*>(&y), sizeof(y));

	
}

template<typename fileName, typename output>

auto myRead(fileName & x, output y){
	
	x.read(reinterpret_cast<char*>(&y), sizeof(y));
	return(y);
}









#endif // !MYREADWRITE_HPP

