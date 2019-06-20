#include <iostream>

template <typename T>
class List {
    public:
        // 设置list中位置
        virtual bool setPos(int pos) = 0;

        // 插入一个元素
        virtual bool insert(const T& e) = 0;

        // 删除一个元素
        virtual bool remove(const T& e) = 0;
        
        // 获取一个元素
        virtual bool getValue(const T& e) = 0;
};