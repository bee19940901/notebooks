//
// Created by Administrator on 2025/3/14.
//


#include "runoob.hpp"

// Map
// 映射的增删改查
template <typename K, typename V>
void printMap(const map<K, V> &myMap){
    cout << "{\n";
    for(auto it = myMap.begin(); it != myMap.end(); ++it){
        cout << setw(8) << it->first << " : " << it->second << endl;
    }
    cout << "}\n";
}

void func52(){
    // 声明一个空字典
    map<string, int> scores;
    printMap(scores);
    // 初始化字典
    // 与Python不同的是， C++的字典默认是有顺序的
    map<string, int> scores1 = {
            {"Python",95},
            {"R",100},
            {"Linux", 75},
            {"Report", 95}
    };
    printMap(scores1);
    // 增加一个元素
    scores1["Bio"] = 100;
    printMap(scores1);
    // 由于Map总是根据键的值进行排序的，所有没办法控制插入的位置
    // 使用insert插入键值对
    scores1.insert({"C++", 0});
    printMap(scores1);
    // 是哟个emplace添加元素
    scores1.emplace("Java", 0);
    printMap(scores1);
    // 所以Map只有增加没有插入的说明，因为Map总是自动排序的

    // 删除Map中的一个元素
    // erase方法
    // 根据键进行删除
    scores1.erase("Report");
    printMap(scores1);

    // 修改Map中的一个元素
    // 使用操作符
    scores1["C++"] = 60;
    printMap(scores1);
    // 使用at方法
    scores1.at("Java") = 60;
    printMap(scores1);

    // 查找一个元素
    auto it = scores1.find("Java");
    if(it != scores1.end()){
        cout << "Found Java, " << "Value=" << scores1["Java"] << endl;
    } else{
        cout << "Not found Java!\n";
    }
    // 遍历一个映射
    // 范围循环遍历一个映射
    for(auto &pair: scores1){
        cout << pair.first << "->" << pair.second << endl;
    }
    //使用一个迭代器来遍历一个映射
    for(auto itr = scores1.begin(); itr != scores1.end(); ++itr){
        cout << itr->first << " : " << itr->second << endl;
    }

}


// 打印数组
void printArray(const int *arr, int arr_size){
    cout << "[";
    for(int i = 0; i < arr_size; i++){
        cout << left << setw(16) << *(arr + i);
    }
    cout << "]\n";
}

// 数组的增删改查
void func51(){
    // 声明一个空数组
    // 里面是垃圾值
    int arr[5];
    printArray(arr, 5);
    // 声明并初始化一个数组
    int arr1[5] = {0};
    printArray(arr1, 5);
    // 数组一旦声明，大小是不能改变的，所以不存在增和删，只有改和查
    // 使用索引查找元素
    cout << "arr1[2]=" << arr1[2] << endl;
    // 修改数组的元素
    printArray(arr1, 5);
    arr1[2] = 1318;
    printArray(arr1, 5);
}


// 操作向量
void func50(){
    /*************** 增 ******************/
    // 初始化一个空向量
    vector<int> vec;
    // 往向量的末尾添加元素
    vec.push_back(10);
    vec.push_back(42);
    vec.push_back(36);
    vec.push_back(8787);
    vec.push_back(5);
    vec.push_back(1214);
    vec.push_back(1892738);
    printVector(vec);
    // 在第三个元素前面插入元素
    vec.insert(vec.begin() + 2, 1994);
    printVector(vec);

    /*************** 删 *****************/
    // 弹出向量中末尾元素
    vec.pop_back();
    printVector(vec);
    // 删除向量中第一个元素
    vec.erase(vec.begin());
    printVector(vec);
    // 删除向量中第三个的元素
    vec.erase(vec.begin() + 2);
    printVector(vec);

    /******************* 改 ************************/
    // 修改向量中某个位置的元素
    vec[2] = 2025;
    cout << "vec.at(2)=" << vec.at(2) << endl;

    /******************** 查 *************************/
    // 使用下表访问元素
    cout << "vec[1]=" << vec[1] << endl;
    cout << "vec[2]=" << vec[2] << endl;
    // 使用at访问元素
    cout << "vec.at(1)=" << vec.at(1) << endl;
    cout << "vec.at(2)=" << vec.at(2) << endl;
    // 查询向量中元素的数量
    printVector(vec);
    size_t vec_size = vec.size();
    cout << "Size of vec is " << vec_size << endl;
    // 普通循环遍历向量
    for(int i = 0; i < vec_size; i++){
        cout << "vec[" << i <<"]=" << vec[i] << endl;
    }
    //范围循环遍历向量,只关心值，不是很关心索引
    int n = 0;
    for(int &i : vec){
        cout << "vec[" << n <<"]=" << i << endl;
        n++;
    }
    // 使用迭代器遍历向量中的元素
    for(auto it = vec.begin(); it < vec.end(); it++){
        cout << *it << endl;
    }
}

// 打印一个向量
template <typename T>
void printVector(vector<T> &vec){
    cout << "[";
    for(const auto &i : vec){
        cout << left << setw(8) << i;
    }
    cout << "]\n";
}

// vector
void func49(){
    // 默认初始化一个空的向量
    vector<int> numbers;
    // 打印空向量, 里面什么都没有
    for(int &i : numbers){
        cout << i << endl;
    }
    // 初始化五个元素的向量
    vector<int> nums  = {1, 3, 5};
    // 打印向量
    for(int &i : nums){
        cout << i << endl;
    }
    // 初始化一个包含5个默认值的向量（0）
    vector<int> vec1(5);
    for(int &i : vec1){
        cout << i << endl;
    }
    // 初始化一个包含10个1的向量
    vector<int> vec2(10,1);
    for(int &i : vec2){
        cout << i << endl;
    }

}

// 嵌套结构体
void func48(){
    Employee lily;
    Employee bee;
    lily.name="Lily";
    lily.age=28;
    lily.height=158.0;
    lily.weight=55.0;
    bee.name = "Bee";
    bee.age = 30;
    bee.height = 173.5;
    bee.weight = 75.0;
    Company company;
    company.worker=bee;
    company.boss=lily;
    cout
    << "In this company, "
    << company.boss.name
    << " is the boss, "
    << company.worker.name
    << " is the worker.\n";
}

// 函数返回一个结构体
Employee getE(){
    static Employee e;
    e.name="Lily";
    e.age=28;
    e.height=158.0;
    e.weight=55.0;
    return e;
}

void func47(){
    Employee e = getE();
    printE(&e);
}

// 结构体指针作为函数参数
void printE(Employee *e){
    cout
    << "Hello, my name is "
    << e->name
    << ", my height is "
    << fixed
    << setprecision(2)
    << e->height
    << " cm"
    << ", my weight is "
    << fixed
    << setprecision(2)
    << e->weight
    << " kg."
    << endl;
}

void func46(){
    Employee bee;
    bee.name = "Bee";
    bee.age = 30;
    bee.height = 173.5;
    bee.weight = 75.0;
    Employee *bee_p = &bee;
    printE(bee_p);
}


// 结构体引用
void func45(){
    Employee bee;
    bee.name = "Bee";
    bee.age = 30;
    bee.height = 173.5;
    bee.weight = 75.0;
    Employee &bee_p = bee;
    cout
            << "Hello, my name is "
            << bee_p.name
            << ", my height is "
            << fixed
            << setprecision(2)
            << bee_p.height
            << " cm"
            << ", my weight is "
            << fixed
            << setprecision(2)
            << bee_p.weight
            << " kg."
            << endl;
}


// 结构体指针
void func44(){
    Employee bee;
    bee.name = "Bee";
    bee.age = 30;
    bee.height = 173.5;
    bee.weight = 75.0;
    Employee *bee_p = &bee;
    cout
            << "Hello, my name is "
            << bee_p->name
            << ", my height is "
            << fixed
            << setprecision(2)
            << bee_p->height
            << " cm"
            << ", my weight is "
            << fixed
            << setprecision(2)
            << bee_p->weight
            << " kg."
            << endl;

}

// 机构体
void func43(){
    Employee bee;
    bee.name = "Bee";
    bee.age = 30;
    bee.height = 173.5;
    bee.weight = 75.0;
    cout
    << "Hello, my name is "
    << bee.name
    << ", my height is "
    << fixed
    << setprecision(2)
    << bee.height
    << " cm"
    << ", my weight is "
    << fixed
    << setprecision(2)
    << bee.weight
    << " kg."
    << endl;
}


// 循环输入， 输入错误就退出
void func42(){
    int a, b;
    while (true){
        cout << "Please enter two numbers: ";
        if(!(cin >> a >> b)){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cerr << "Invalided Input Bye!\n";
            break;
        }
        if(a > b){
            cout << a << " is bigger!\n";
        } else if( a < b){
            cout << b << " is bigger!\n";
        } else {
            cout << "both " << a << endl;
        }
    }
}


// cin 读取字符串
void func41(){
    string name;
    cout << "Enter your name: ";
    if(!(cin >> name)){
        cerr << "Invalided Input!\n";
        return;
    }
    cout << "Hello, " << name << "!\n";
}

// cin
void func40(){
    // 基本使用
    int num;
    cout << "Enter a number: ";
    if(!(cin >> num)){
        cerr << "Invalided Input!\n";
        return;
    }
    cout << "Your number is " << num << endl;
}

// cout
void func39(){
    cout << "Hello, world!\n";
    // 多个 << 链接
    int a=10, b=20;
    cout << "a=" << a << ", b=" << b << endl;
    // 设置浮点数精度
    double height = 173.38437476426;
    cout << fixed << setprecision(2) << height << endl;
    // 打印布尔值
    cout << "a > b = " << boolalpha << (a > b) << endl;
    // 设置固定列宽
    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            cout << left << setw(16) << rand();
        }
        cout << endl;
    }
    // 重定向到文件
    ofstream outFile("../outfile.txt");
    if(!outFile){
        cerr << "Fail to open file!\n";
        exit(1);
    }
    cout.rdbuf(outFile.rdbuf());
    cout << "Hello, world!\n";
    outFile.close();

}

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
