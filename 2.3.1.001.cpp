#include<iostream>
using namespace std;

int get_size(int data[]){
	return sizeof(data);
}

int main(int argc,char *argv[]){
	int data1[]={1,2,3,4,5};
	int sz1=sizeof(data1);
	
	int *data2=data1;
	int sz2=sizeof(data2);
	
	int sz3=get_size(data1);

	cout<<sz1<<","<<sz2<<","<<sz3<<endl;
	return 0;
}
