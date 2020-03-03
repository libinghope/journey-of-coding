#include <iostream>
using namespace std;

//参考书籍，《大话设计模式》，《设计模式那些事》
class BaseOperation{
    public:
    virtual double calculate();
    double number1;
    double number2;
};
class AddOperation :public BaseOperation{
    virtual double calculate(){
        return number1+number2;
    }
};
class OperationFactory
{
public:
    static BaseOperation operationCreate(char oper)
    {
        switch (oper)
        {
        case '+':
            return new AddOperation;
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;

        default:
            break;
        }
    }
};
int main()
{

    return 0;
}