/*
 * reverseNum.h
 *
 *  Created on: 2014-3-14
 *      Author: Administrator
 */

#ifndef REVERSENUM_H_
#define REVERSENUM_H_

#include <iostream>
using namespace std;

#include "convertType.h"

int reverseNum(int input){
	int rtn = 0;
	while(input > 0){
		rtn = rtn * 10 + input % 10;
		input /= 10;
	}
	return rtn;
}

int reverseNum2(int input){
	int rtn = 0;
	string inputStr = convertFrom<string>(input);
	std::reverse(inputStr.begin(), inputStr.end());
	rtn = convertFrom<int>(inputStr);
	return rtn;
}

void testReverseNum(){
	int input = 0;
	while(cin >> input){
		cout << "reverseNum2:" << reverseNum2(input) << endl;
		cout << "reverseNum1:" << reverseNum(input) << endl;
	}
}


#endif /* REVERSENUM_H_ */
