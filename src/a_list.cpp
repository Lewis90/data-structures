#include "a_list.hpp"

const int DEFAULT_SIZE=10;

// 构造函数
template <typename T>
AList<T>::AList() {
    int size = DEFAULT_SIZE;
    listArray = new T [size];
    maxSize = size;
    listSize = fence = 0;
}

// // 构造函数
// template <typename T>
// AList<T>::AList(int size = DEFAULT_SIZE) {
//     listArray = new T [size];
//     maxSize = size;
//     listSize = fence = 0;
// }

// 析构函数
template <typename T>
AList<T>::~AList(){
    delete [] listArray;
}

// 设置list中位置
template <typename T>
bool AList<T>::setPos(int pos) {
    if ((pos >= 0) && (pos <= listSize)) {
        fence = pos;
    } 
    return ( pos >= 0 ) && ( pos <= listSize );
}

// 插入一个元素
template <typename T>
bool AList<T>::insert(const T& item) {
    if (listSize == maxSize) return false;
    // 移动插入位置之后元素，让出插入空间
    for (int i = listSize; i > fence; i--){
        listArray[i] = listArray[i-1];
    }
    listArray[fence] = item;
    listSize++; // list 中数量自增 1
    return true;
}

// 删除一个元素
template <typename T>
bool AList<T>::remove(const T& it) {
    if (listSize == fence) return false;
    it = listArray[fence];
    for (int i = fence; i < listSize - 1; i++){
        listArray[i] = listArray[i+1];
    }
    listSize--;
    return true;
}

// 获取一个元素
template <typename T>
bool AList<T>::getValue(const T& it) {
    if (fence == listSize) {
        return false;
    } else {
        it = listArray[fence];
        return true;
    }
}