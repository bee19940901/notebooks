//
// Created by Administrator on 2025/3/27.
//

#include <iostream>
#include <list>

template <typename T>
void printList(const std::list<T> &l) {
    int i = 0;
    std::cout << std::endl;
    for (auto it = l.begin(); it != l.end(); ++it, ++i) {  // 正确遍历
        std::cout << "List[" << i << "]=" << *it << std::endl;
    }
}

int main() {

    // 初始化一个链表
    std::list<int> l;

    // 查看链表是不是空的
    if (l.empty()) {
        std::cout << "List is empty.\n";
    } else {
        std::cout << "List is not empty.\n";
    }

    // 包含5个初始化元素的链表
    std::list<int> l1(5);

    // 包含5个10的链表
    std::list<int> l2(5, 10);

    // 使用初始化列表创建链表
    std::list<int> l3({1, 3, 5, 7, 9});

    // 另一种初始化链表的方式
    std::list<int> l4 = {1, 3, 5, 7, 9};

    // 向链表的末尾添加元素
    l4.push_back(11);

    // 向链表末尾添加多个元素（逐个添加）
    l4.push_back(13);
    l4.push_back(15);
    l4.push_back(17);

    // 使用 insert 批量添加元素
    l4.insert(l4.end(), {19, 21, 23});

// 在链表的头部添加一个元素
    l4.push_front(-1);

    // 在链表的头部添加多个元素
    l4.insert(l4.begin(), {-5, -3});

    // 在链表的中间添加一个元素, 一般链表是在头尾部添加额删除，不会在中间
//    l4.insert(l4.begin() + 3, 100);
    // 把迭代器移动到第四个元素
    auto it = l4.begin();
    std::advance(it, 3);
    // 在这个位置插入一个元素
    l4.insert(it, 100);

    // 在第5个元素的的位置插入多个元素
    it = l4.begin();
    std::advance(it, 4);
    l4.insert(it, {101, 102, 103});

    // 在链表尾部弹出一个元素
    l4.pop_back();
    l4.pop_back();

    // 在链表头部弹出一个元素
    l4.pop_front();

    // 删除链表中间的元素，效率低
    it = l4.begin();
    // 删除第五个元素,103
    std::advance(it, 1);
    l4.erase(it);

    // 删除一定范围内的元素
    auto it1 = l4.begin();
    std::advance(it1, 3);
    auto it2 = l4.begin();
    std::advance(it2, 10);
    l4.erase(it1, it2);

    // 按值修改链表中的某一个
    // 找到这个值所在的迭代器
    it = std::find(l4.begin(), l4.end(), 101);
    if(it != l4.end()){
        *it *= 10;
    }

    // 删除所有的偶数
    for(auto i = l4.begin(); i != l4.end();){
        if(*i % 2 == 0 ){
            i = l4.erase(i);
        } else{
            ++i;
        }
    }

    // 将所有能被3整除的元素乘2
    for(auto i = l4.begin(); i != l4.end();){
        if(*i % 3 == 0 ){
            *i = (*i * 2) ;
        }
        ++i;
    }

    // 将所有能被2整除的乘3
    std::for_each(l4.begin(), l4.end(), [](int &i){
        if( i % 2 == 0 ){
            i *= 3;
        }
    });

    // 将所有元素都乘2
    for(int &n : l4){
        n *= 2;
    }

    printList(l4);
    return 0;
}
