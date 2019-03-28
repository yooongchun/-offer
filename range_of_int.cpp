//求解int的范围
//test.cpp

#include <iostream>
#include<cmath>
#include<limits>

int main(int args,char *argv[]){
	std::cout<<"Size of int(Bytes):"<<sizeof(int)<<std::endl;
	std::cout<<"Max of int:"<<std::to_string(int(pow(2,31)-1))<<std::endl;
	std::cout<<"Min of int:"<<std::to_string(int(pow(-2,31)))<<std::endl;
	std::cout<<"Max of INT:"<<INT_MAX<<std::endl;
	std::cout<<"Min of INT:"<<INT_MIN<<std::endl;
	return 0;
}