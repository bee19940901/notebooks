////
//// Created by Administrator on 2025/3/26.
////
//
//// C++数组
//#include <array>
//#include <iostream>
//#include <iomanip>
//#include <algorithm>
//
//template <typename T, size_t N>
//void printArray(std::array<T, N> &arr){
//    std::cout << std::setfill('*') << std::setw(50) << "*" << std::endl;
//    for(int i =0; i < N; i++){
//        std::cout << "Array[" << i << "]=" << arr[i] << std::endl;
//    }
//    std::cout << std::setfill('*') << std::setw(50) << "*" << std::endl;
//
//}
//
//int main(){
//    // 声明一个数组
//    std::array<int, 5> arr{};
//    // 空数组里面默认填充0
//    printArray(arr);
//    // 给数组填充一个值
//    arr.fill(42);
//    printArray(arr);
//    // 修改数组的元素
//    for(int i =0; i < 5; i++){
//        arr[i] = i*5;
//    }
//    printArray(arr);
//    // 通过索引访问元素
//    std::cout << "Array[3]=" << arr[3] << std::endl;
//    std::cout << "Array[1]=" << arr[1] << std::endl;
//    // 使用带越界检查的at方法
//    try{
//        std::cout << "Array[1]=" << arr.at(1) << std::endl;
//        std::cout << "Array[3]=" << arr.at(3) << std::endl;
////        std::cout << "Array[5]=" << arr.at(5) << std::endl;
//    } catch (const std::exception & err){
//        std::cerr << std::endl << "Error: " << err.what() << std::endl;
//    }
//    // 使用索引修改一个元素
//    arr[3] = 100;
//    printArray(arr);
//    // 使用 at方法修改一个元素
//    arr.at(3) = 200;
//    printArray(arr);
//    // 对数组进行排序
//    std::sort(arr.begin(), arr.end());
//    printArray(arr);
//    // 使用普通for循环遍历一个数组
//    for(int i =0; i < arr.size(); i++){
//        std::cout << arr[i] << std::endl;
//    }
//    // 使用范围for循环来遍历一个数组
//    for(const auto &n : arr){
//        std::cout << n << std::endl;
//    }
//    // 使用迭代器来遍历一个数组
//    for(auto it =arr.begin(); it != arr.end(); ++it){
//        std::cout << *it << std::endl;
//    }
//    // 获取数组的第一个和最后一个元素
//    std::cout << "First item = " << arr.front() << std::endl;
//    std::cout << "Last item = " << arr.back() << std::endl;
//    return 0;
//
//}