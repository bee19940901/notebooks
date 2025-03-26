////
//// Created by Administrator on 2025/3/26.
////
//
//// 泛型编程
//#include <iostream>
//#include <vector>
//#include <set>
//
//// 既可以打印数组又可以打印向量
//template <typename T>
//void myPrint(const T &t, size_t n){
//    for(size_t i =0; i < n; i++){
//        std::cout << "arr[" << i << "]=" << t[i] << std::endl;
//    }
//}
//
//// 任意两个变量的值交换
//template <typename T, typename M>
//void swap(T &a, M &b){
//    T temp = a;
//    a = (T )b;
//    b = (M )temp;
//}
//
//int main(){
//    std::vector v({1, 2,3});
//    int arr[3] = {7, 8,9};
//    myPrint(v, 3);
//    myPrint(arr, 3);
//
//    int a = 10;
//    double b = 3.14;
//    std::cout << "a = " << a << std::endl;
//    std::cout << "b = " << b << std::endl;
//    // 注意数据之间的隐式转换
//    swap(a, b);
//    std::cout << "a = " << a << std::endl;
//    std::cout << "b = " << b << std::endl;
//    return 0;
//}
//
