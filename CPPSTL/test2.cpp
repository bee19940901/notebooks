//
// Created by Administrator on 2025/3/27.
//

#include <iostream>
#include <vector>
#include <exception>

template <typename T>
void printVector(const std::vector<T> &vec){
    std::cout << std::endl;
    for(int i = 0; i < vec.size(); i++){
        std::cout << "Vector[" << i << "]=" << vec[i] << std::endl;
    }
}

int main(){
    // 声明一个空向量
    std::vector<int> v;
    // 为向量预设一个容量，避免频繁扩容
    v.reserve(1024);
    // 什么都没有
    printVector(v);
    // 给向量添加5个元素
    for(int i =0; i< 5; i++){
        v.push_back(i*3);
    }
    printVector(v);
    // 向量头部插入5个元素
    v.insert(v.begin(), {88, 99, 100, 765, 666});
    printVector(v);
    // 向量尾部插入3个元素
    v.insert(v.end(), {1, 2, 3});
    printVector(v);
    // 使用操作符访问向量的元素
    std::cout << "Vector[" << 3 << "]=" << v[3] << std::endl;
    // 使用at方法访问向量的元素
    std::cout << "Vector.at(" << 3 << ")=" << v.at(3) << std::endl;
    // at方法有边界检查
    try{
        std::cout << v.at(100);
    } catch (const std::exception &err){
        std::cerr << "Error: " << err.what() << std::endl;
    }
    // 使用操作符没有边界检查
    std::cout << v[100] << std::endl;
    // 查看元素的数量
    std::cout << "Vector.size()=" << v.size() << std::endl;

    // 删除向量中第2个元素
    v.erase(v.begin() + 2);
    printVector(v);

    // 删除向量中一定范围类的元素, 0, 1, 2
    v.erase(v.begin(), v.cbegin()+3);
    printVector(v);

    // 根据值来删除元素, 删除所有值等于3的元素
    v.erase(std::remove(v.begin(), v.end(), 3), v.end());
    printVector(v);

    // 删除向量中所有能被3整除的元素
    v.erase(std::remove_if(v.begin(), v.end(), [](int n){return n % 3 == 0;}), v.end());
    printVector(v);

    // 使用索引修改元素的值
    v[1] = 100;
    printVector(v);
    // 操作符超过边界, 程序没有报错，也没有赋值成功
    v[3] = 1000;
    printVector(v);
    // 使用at和索引对袁元素值进行修改
    v.at(1) = 1000;
    printVector(v);
    // 使用at进行边界检查
    try{
        v.at(3) = 10000;
    } catch (const std::exception &err){
        std::cerr << "Error: " << err.what() << std::endl;
    }
    // 向量头部插入5个元素
    v.insert(v.begin(), {88, 99, 100, 765, 666});
    printVector(v);
    // 向量尾部插入3个元素
    v.insert(v.end(), {1, 2, 3});
    printVector(v);

    // 将所有可以被3整除的元素除以3
    std::for_each(v.begin(), v.end(), [](int &i){
        if(i % 3 == 0){
            i /= 3;
        }
    });
    printVector(v);

    //  清空向量中的所有元素
    v.clear();
    printVector(v);

    return 0;
}