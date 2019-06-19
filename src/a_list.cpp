#include <iostream>
#include "list.hpp"

const int DEFAULT_LIST_SIZE = 10;

template <class Elem>
class AList: public List<Elem> {
    private: 
        Elem * listArray; // listArray 数组
        int maxSize;    // list 大小
        int listSize;   // list 中数量大小
        int fence;      // 当前list得位置

    public: 
        
        // 构造函数
        AList(int size = DEFAULT_LIST_SIZE) {
            listArray = new Elem[size];
            maxSize = size;
            listSize = fence = 0;
        }

        // 析构函数
        ~AList(){
            delete [] listArray;
        }

        // 设置list中位置
        bool setPos(int pos) {
            if ( (pos >= 0) && (pos <= listSize) ) {
                fence = pos;
            } 
            return ( pos >= 0 ) && ( pos <= listSize );
        }

        // 插入一个元素
        bool insert(const Elem& e) {

        }

        // 删除一个元素
        bool remove(Elem &e) {

        }
        
        // 获取一个元素
        bool getValue(Elem& it) {
            if (fence == listSize ) {
                return false;
            } else {
                it = listArray[fence];
                return true;
            }
        }
};