#include<iostream>

#if 0
struct  Person{
    char name[128];
    int age;
}

typedef struct Person MyPerson
#endif

typedef struct Person
{
	char name[128];
	int age;
}MyPerson;

typedef char* PCHAR;

//typeid可以查看类型信息
void testTypeID(){
    char *p1, *p2;

    cout << typeid(p1).name() << endl;
    cout << typeid(p2).name() << endl;

}



int main(){

    system("pause");
    return 0;
}