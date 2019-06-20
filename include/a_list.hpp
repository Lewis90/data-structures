#include <list.hpp>

template <typename T>
class AList: public List<T> {

    private: 
        T* listArray; // listArray 数组
        int maxSize;    // list 大小
        int listSize;   // list 中数量大小
        int fence;      // 当前list得位置

    public: 
        // 构造函数
        AList();

        // // 构造函数
        // AList(int size);

        // 析构函数
        ~AList();

        // 设置list中位置
        bool setPos(int pos);

        // 插入一个元素
        bool insert(const T& item);

        // 删除一个元素
        bool remove(const T& it);

        // 获取一个元素
        bool getValue(const T& it);
};