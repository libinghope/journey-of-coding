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
    system("pause");
    return 0;
}