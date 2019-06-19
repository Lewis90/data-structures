#include <iostream>

template <class Elem>
class List {
    public:
        // 设置list中位置
        virtual bool setPos(int pos) = 0;

        // 插入一个元素
        virtual bool insert(const Elem& e) = 0;

        // 删除一个元素
        virtual bool remove(Elem &e) = 0;
        
        // 获取一个元素
        virtual bool getValue(Elem& e) const = 0;
};