/*
1.求解给定数字是否在一个有序的二维数组中
2.输入为int型二维数组和一个整数，输出为true或false
*/

#include <iostream>

bool isValueInArray(int *matrix[],int rows,int columns,int target){
	//判断边界条件和非法输入
	if(matrix==nullptr || rows<1||columns<1) return false;

	int row=0,col=columns;//从右上角开始
	while(row<rows && col>=0){
		if(matrix[row][col]==target)
			return true;
		else if(matrix[row][col]>target)
			col--;
		else
			row++;
	}
	return false;
}

/*********测试**********/

void Test(std::string testName,int *matrix[],int rows,int columns,int target){
	std::cout<<"%s begins:"%

}
void test(){
	//测试
	int arr1[][4]={{1,2,8,9},
			{2,4,9,12},
			{4,7,10,13},
		    {6,8,11,15}};
	int d1[]={-1,0,1,7,15,22};
	bool t1[]={false,false,true,true,true,false};

	int **arr2=nullptr;
	int d2[]={-1,0,1};
	bool t2[]={false,false,false};

	for(int i=0;i<6;i++){
		if(t1[i]==isValueInArray(arr1,4,4,d1[i]))
			;
		else
			throw std::exception("Error for test1 value:%d",d1[i]);
	}
	std::cout<<"Test 1 is passed."<<std::endl;

	for(int i=0;i<3;i++){
		if(t1[i]==isValueInArray(arr2,0,0,d2[i]))
			;
		else
		 	throw std::exception("Error for test2 value:%d",d2[i]);
	}
	std::cout<<"Test 2 is passed."<<std::endl;
	
	std::cout<<"All tests passed.Good!"<<std::endl;
}

int main(){
	test();
	return 0;
}