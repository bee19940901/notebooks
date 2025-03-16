//
// Created by Administrator on 2025/3/14.
//

#include "runoob.hpp"

// 返回一个数组的函数
const int* myArray(){
    static int nums[5] = {0};
    for(int i = 0; i < 5; i++){
        nums[i] = ::rand();
    }
    return nums;
}

void func38(){
    const int* p = myArray();
    for(int i = 0; i < 5; i++){
        cout << "Address=" << (p+i) << "\t" << "Value=" << *(p +i) << endl;
    }
}


// 返回指针的函数
void func37(){
    int* p = myRandom();
    cout << "Address=" << p << "\t" << "Value=" << *p << endl;
}

int* myRandom(){
    static int i = ::rand();
    return &i;
}

// 能接受指针的函数也能接受数组，因为数组就是常量指针
void func36(){
    int nums[5] = {1, 3, 5, 7 ,9};
    int *p = nums;
    cout << "Mean=" << getMean(p, 5) << endl;
    cout << "Mean=" << getMean(nums, 5) << endl; // 数组退化为指针

}

double getMean(const int *arr, ::size_t size){
    double sum = 0;
    for(::size_t s = 0; s < size; s++){
        sum += *(arr + s);
    }
    return sum / (double )size;
}

void getSeconds(unsigned long *ul_p){
    *ul_p = ::time(nullptr);
}

void func35(){
    unsigned long sec = 0;
    getSeconds(&sec);
    cout << "sec=" << sec << endl;
}

Class10::Class10(int x, int y) {
    a = x;
    b = y;
}

void Class10::run(){
    cout << "a = " << a << "\t";
    cout << "b = " << b << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "a && b = " << (a && b) << endl;
}

Class1::Class1(int x, int y) {
    a = x;
    b = y;
}

void Class1::run() {
    cout << "a=" << a << "\t" << "b=" << b << "\n";
    cout << " a>b? " << ( a>b ? "yes" : "No") << "\n";
}

// while循环
void func1(){
    int a = 5;
    int i = 0;
    while (i < 5){
        cout << a << "*" << i << "=" << (a*i) << endl;
        i++;
        a++;
    }
}

// 在while循环中使用break
void func2(){
    int a = 5;
    int i = 0;
    while (true){
        if( i > 10){
            break;
        } else{
            cout << a << "*" << i << "=" << (a*i) << endl;
            i++;
            a++;
        }
    }
}

// do .. while 循环
// 至少会运行一次，再跳出循环
void func3(){
    int a = 5;
    int i = 10;
    do{
        cout << a << "*" << i << "=" << (a*i) << endl;
        i++;
    } while (i < 10);
}

// 常规for循环
void func4(){
    for (int i = 0; i < 10; i++){
        cout << "i=" << i << endl;
    }
}

// 使用break跳出循环
void func5(){
    for(int i = 0;;i++){
        if(i >= 10){
            break;
        }
        cout << "i=" << i << endl;
    }
}

// 加强的for循环
void func6(){
    int numbers[5] = {0, 2, 5, 9, 3};
    for(auto &n : numbers ){
        cout << "n=" << n << endl;
    }
}

// 同时获取index和Value
void func7(){
    int numbers[5] = {0, 2, 5, 9, 3};
    for(int i = 0; i < 5; i++){
        cout << "numbers[" << i << "]=" << numbers[i] << endl;
    }
}

// 遍历一个字符串并大写
void func8(){
    string str("beliver19940901@gmail.com");
    for(auto &c: str){
        c = (char )toupper(c);
    }
    cout << str << endl;
}

// 使用嵌套循环来打印一个乘法口诀表
void func9(){
    for(int i = 1; i < 10; i ++){
        for(int j = i; j < 10; j++){
            if (j < 9){
                cout << i << "*" << j << "=" << i*j << "\t";
            } else{
                cout << i << "*" << j << "=" << i*j;
            }
        }
        cout << endl;
    }
}

// 使用 continue 和 break 去打印100以内的所有偶数
void func10(){
    int i = 0;
    while (true){
        if (i == 100){
            cout << "Program Exit..." << endl;
            break;
        } else {
            if (i % 2 == 0){
                cout << i << endl;
            }
            i++;
            continue;
        }
    }
}

// setw函数(默认右对齐)
void func11(){
    double nums[10] = {0};
    for(int i = 0; i < 10; i++){
        nums[i] = pow(2.0, (double )i);
    }
    cout << setw(8) << "Index" << setw(8) << "Value" << endl;
    for(int i = 0; i < 10; i ++){
        cout << setw(8) << i << setw(8) << nums[i] << endl;
    }
}

// 使用setw函数实现左对齐
void func12(){
    double nums[10] = {0};
    for(int i = 0; i < 10; i++){
        nums[i] = pow(2.0, (double )i);
    }
    cout << left << setw(8) << "Index" << left << setw(8) << "Value" << endl;
    for(int i = 0; i < 10; i ++){
        cout << left << setw(8) << i << left <<setw(8) << nums[i] << endl;
    }
}

// 多维数组
void func13(){
    int arr[3][3] = {{0, 1,2}, {3, 4, 5}, {6, 7,8}};
    for(int i =0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "arr[" << i << "]" << "[" << j << "]=" << arr[i][j] << endl;
        }
    }
}

// 数组名是指向数组中第一个元素的常量指针
void func14(){
    int arr[5] = {2, 4, 5 , 6 , 9};
    int *p;
    p = arr;
    for(auto i : arr){
        cout << i << endl;
    }
    cout << "*****************************************" << endl;
    for (int i = 0; i < 5; i++){
        cout << "arr[" << i << "]=" << *(p+i) << endl;
    }
    cout << "*****************************************" << endl;
    for (int i = 0; i < 5; i++){
        cout << "arr[" << i << "]=" << *(p++) << endl;
    }
}

// C++ 传递数组给函数
double getAverage(const int arr[], int arr_size){
    // arr 是指向一个内存块第一个元素地址的常量指针
    int arr_sum = 0;
    for (int i =0; i < arr_size; i++){
        arr_sum += *arr;
        arr++;
    }
    return (double )arr_sum / (double )arr_size;
}

void func15(){
    int arr[5] = {1, 3, 4, 6, 8};
    double arr_mean = getAverage(arr, 5);
    cout << "Mean=" << arr_mean << endl;
    cout << "arr[3]=" << arr[3] << endl;
}

// 函数返回一个静态数组
int* getRandom() {
    static int nums[10];  // 静态存储期
    for (int i = 0; i < 10; i++) {
        nums[i] = rand();
    }
    return nums;
}

void func16(){
    int * p = getRandom();
    for(int i =0; i < 10; i++){
        cout << "nums["<< i << "]=" << *(p++) << endl;
    }
}

int* getArray(int size){
    int* arr = new int[size];
    for (int i =0; i < size; i++){
        arr[i] = 5 * i;
    }
    return arr;
}

// 使用new在堆上动态分配一个数组
void func17(){
    int *arr_p = getArray(10);
    for(int i = 0; i < 10; i++){
        cout << "arr[" << i << "]=" << *(arr_p + i) << endl;
    }
    delete[] arr_p;
}

// C风格的字符串
void func18(){
    char str1[] = "Hello, ";
    char str2[] = {'B', 'e', 'e', '!','\0'};
    char str3[1024] = {0};
    // 将str1复制到str3
    strcpy(str3, str1);
    cout << "str3=" << str3 << endl;
    // 将str2连接到str3
    ::strcat(str3, str2);
    cout << "str3=" << str3 << endl;
    // 计算str3的总长度(有效长度)
    cout << "len(str3)=" << ::strlen(str3) << endl;
 }

 // C++风格的字符串
 void func19(){
     string str1 = "Hello, ";
     string str2 = "Bee!";
     string str3;
     // 将str1复制到str3
     str3 = str1;
     cout << "str3=" << str3 << endl;
     // 将str2连接到str3
     str3 += str2;
     cout << "str3=" << str3 << endl;
}

// C++ string 常见操作
// 使用构造函数构建字符串
void func20(){
    string str1("Bee");
    cout << "str1=" << str1 << endl;
    string str2(str1);
    cout << "str2=" << str2 << endl;
    string str3(5, 'B');
    cout << "str3=" << str3 << endl;
}

// 字符串拼接
void func21(){
    string str1;
    for(int i = 0 ; i < 10; i++){
        str1 += "Bee";
    }
    cout << "str1=" << str1 << endl;

    // 预分配内存，避免频繁扩容， 优化拼接速度
    // 使用append方法和length方法，更加符合面向对象编程规范
    string str2;
    str2.reserve(3072);
    for (int i = 0; i < 1000; i++){
        str2.append("Bee");
    }
    cout << "str2=" << str2 << endl;
    cout << "len(str2)=" << str2.length() << endl;
}

// 使用子字符串分割字符串
vector<string> split(const string &str, const string &sep){
    vector<string> result;
    ::size_t start = 0;
    ::size_t end = 0;
    while ((end = str.find_first_of(sep, start)) != string::npos){
        result.push_back(str.substr(start, end-start));
        start = end + 1;
    }
    result.push_back(str.substr(start));
    return result;
}

void func22(){
    vector<string> res = split("Alison Tyler Believer Bee Chanel Preston Diamond Jackson", " ");
    for (auto &str:res){
        cout << str << endl;
    }
}

// 获取变量的地址
void func23(){
    // 整数变量的地址
    int num = 10;
    cout << "&i=" << &num << endl;
    // 查看数组每个元素的地址
    int nums[5] = {0};
    for (int i =0; i < 5 ; i++){
        cout << "&nums[" << i << "]=" << (nums+i) << endl;
    }
 }

 // C++ 指针
 void func24(){
    // 字符数组
    char chas[6] = {'H', 'e', 'l', 'l', 'o','\0'};
    for(int i =0; i < 6; i++){
        cout << "chas[" << i << "]=" << chas[i] << endl;
        cout << "&chas["<< i << "] = " << static_cast<void*>(chas + i) << endl;
    }
}

// 空指针
void func25(){
    int *int_p = nullptr;
    cout << "int_p=" << int_p << endl;
    cout << "&int_p=" << &int_p << endl;
    cout << "int_p == NULL = " << (int_p == nullptr) << endl;
    // 空指针取反
    if(!int_p){
        cout << "True" << endl;
        cout << "int_p = " << int_p << endl;
    }
 }

 // 指针递增
 void func26(){
    int nums[5] = {1, 3, 5, 7, 9};
    int *nums_p = &nums[0];
    for(int n =0; n < 5; n++){
        cout << "nums[" << n << "]=" << *nums_p << endl;
        nums_p++;
    }
}

// 指针递减
void func27(){
    int nums[5] = {2, 4, 6, 8, 10};
    int *ptr = &nums[4];
    for(int n = 4; n >= 0; n--){
        cout << "nums[" << n << "]=" << *ptr << endl;
        ptr--;
    }
}

// 不同变量之间的指针比较
void func28(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 10;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;
    int *p4 = &num1;
    cout << "p1 = p2 " << (p1 == p2) << endl;
    cout << "p1 = p3 " << (p1 == p3) << endl;
    cout << "p1 = p4 " << (p1 == p4) << endl;
}

// 指向同一数组的不同指针
void func29(){
    int nums[5] = {1, 3, 5, 7, 9};
    int *p1 = &nums[0];
    int *p2 = &nums[2];
    cout << "p1 = p2 " << (p1 == p2) << endl;
    cout << "p1 != p2 " << (p1 != p2) << endl;
    cout << "p1 < p2 " << (p1 < p2) << endl;
    cout << "p1 > p2 " << (p1 > p2) << endl;
}

// 数组名可以理解为是一个指向数组第一个元素的常量指针
void func30(){
    int nums[5] = {1, 3, 5, 7, 9};
    for(int n = 0; n < 5; n++){
//        nums++; // 这是错误的，因为常量指针指向地址不能改变
        cout << *(nums + n) << endl; // 这是正确的，可以理解为指针加法
    }
}

void func31(){
    int nums[5] = {1, 3, 5, 7, 9};
    int *p = nums; // 数组退化为一个指针
    for(int n = 0; n < 5; n++){
        cout << *p << endl;
        p++;
    }
}

// 指针数组
// 整数指针数组
void func32(){
    int nums[5] = {1, 3, 5, 7, 9};
    int *pts[5];
    for (int n = 0; n < 5; n++){
        pts[n] = &nums[n];
    }
    for (auto & pt : pts){
        cout << "Address=" << pt << "\t" << "Value=" << *pt << endl;
    }
}

// 字符串数组
// 字符串可以理解为一个指向一个字符地址的 "常量指针"
void func33(){
    const char *sts[5] = {
            "Alison",
            "Bee",
            "Chanel",
            "Diamond",
            "Arabelle"
    };
    for(auto & st : sts){
        cout << st << endl;
    }
}

// 指向指针的指针
void func34(){
    int num = 42;
    int *p = &num;
    int **pp = &p;
    cout << "num=" << **pp << endl;
}
