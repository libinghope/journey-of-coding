#include <iostream>
#include "array_common.hpp"

using namespace std;
int main(int arg, char* args[]){
    ArrayList<int> arr;
	for (int i = 0; i < 10; i++) {
		arr.add(i);
	}
	for (int i = 0; i < 10; i++) {
		cout << arr.getByIndex(i) << endl;
	}
	ArrayList<string> strArr;
	strArr.add("aaa");
	strArr.add("bbb");
	strArr.add("ccc");
	strArr.add("444");
	for(int i=0; i< 4; i++){
		cout << strArr.getByIndex(i) << endl;
	}

    system("pause");
    return 0;
}