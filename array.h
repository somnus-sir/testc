#define _ARRAY_H_
#define _ARRAY_H_
#include<stdexcept>
#include<iostream>
//异常机制
//invalid_argument是一个类
using std::invalid_argument;
using std::out_of_range;
using namespace std;
class Array
{
public:
    Array():count_(0),pData_(NULL){}
    void push_back(int n)
    {   

        if(0==count_){
            pData_ = new int[1];
            pData_[0] = n;
        }else{
            int* temp = new int[count_+1];
            for(int i=0;i<count_;i++){
                temp[i] = pData_[i];
            }
            temp[count_] = n;
            delete [] pData_;
            pData_ = temp;
        }
        count_++;
    }
    int Size(){
        return count_;
    }
    int Get(int i)
    {
        //抛异常，跑异常的时候要抛出对象，不能抛一个没有实例化的类
        if(i<0)throw invalid_argument("invalid argument");
        if(i>count_)throw out_of_range("out_of_range");
        return pData_[i];
    }

private:
    //数组的大小
    int count_;
    //数组的数据的头指针
    int* pData_;
};
//#include "array.cpp"
#endif //