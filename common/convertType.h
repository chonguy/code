/*
 * convertType.h
 *
 *  Created on: 2014-3-14
 *      Author: Administrator
 */

#ifndef CONVERTTYPE_H_
#define CONVERTTYPE_H_

#include <sstream>
using std::ostringstream;
using std::stringstream;

template<typename OUT_TYPE, typename IN_TYPE>
OUT_TYPE convertFrom(const IN_TYPE &in){
	stringstream stream;
	stream << in;
	OUT_TYPE rtn;
	stream >> rtn;
	return rtn;
}

#endif /* CONVERTTYPE_H_ */
