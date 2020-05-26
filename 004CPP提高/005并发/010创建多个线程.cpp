#include<iostream> 
#include<thread> 
#include<vector>
using namespace std;

//线程入口函数
void myPrint(int num) {
    cout<< "thread编号: "<<num<<" 开始执行"<<endl;
    //--------
    //do something

    cout<< "thread编号: "<<num<<" 执行结束"<<endl;
}

int main() {
    vector<thread> ths;

    for(int i=0;i<10;i++){
        //thread t(myPrint,i);
        ths.push_back(thread(myPrint,i));
    }
    for(auto iter=ths.begin();iter!=ths.end();iter++){
        iter->join();
    }

    cout<< "这里是主线程，执行结束了"<<endl;

    return 0;
}