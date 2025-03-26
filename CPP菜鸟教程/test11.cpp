//#include <iostream>          // 引入输入输出库，用于打印信息
//#include <vector>            // 引入向量库，用于存储计算结果
//#include <queue>             // 引入队列库，用于任务队列
//#include <thread>            // 引入线程库，用于创建和管理线程
//#include <mutex>             // 引入互斥锁库，用于保护共享资源
//#include <condition_variable> // 引入条件变量库，用于线程间同步
//#include <atomic>            // 引入原子操作库，用于线程安全地操作标志变量
//#include <chrono>           // 引入 chrono 头文件来使用时间单位
//
//// 任务处理函数，计算平方并存入结果向量
//void task(int n, std::vector<int> &results, std::mutex &resultsMutex) {
//    std::this_thread::sleep_for(std::chrono::seconds(1));  // 休眠 1 秒
//    int result = n * n;  // 模拟计算任务：计算n的平方
//    {
//        std::lock_guard<std::mutex> lock(resultsMutex); // 使用锁保护共享资源（results）
//        results.push_back(result);  // 线程安全地将结果存入共享的结果向量
//    }
//    std::cout << "Task " << n << " computed: " << result << std::endl;  // 输出计算结果
//}
//
//// 线程池类定义
//class ThreadPool {
//public:
//    explicit ThreadPool(size_t threadCount);  // 线程池构造函数
//    ~ThreadPool();                  // 线程池析构函数
//
//    void enqueueTask(std::function<void()> task);  // 添加任务到任务队列
//    void stop();  // 停止线程池
//
//private:
//    void worker();  // 每个工作线程的执行函数
//
//    std::vector<std::thread> workers;  // 存储工作线程
//    std::queue<std::function<void()>> tasks;  // 存储任务队列
//    std::mutex queueMutex;  // 保护任务队列的互斥锁
//    std::condition_variable condition;  // 条件变量，用于控制任务的开始和结束
//    std::atomic<bool> stopFlag;  // 停止标志，表示是否停止线程池
//};
//
//// 线程池构造函数，初始化工作线程
//ThreadPool::ThreadPool(size_t threadCount) : stopFlag(false) {
//    for (size_t i = 0; i < threadCount; ++i) {
//        workers.emplace_back(&ThreadPool::worker, this);  // 创建并启动工作线程
//    }
//}
//
//// 工作线程的执行函数
//void ThreadPool::worker() {
//    while (true) {
//        std::function<void()> task;
//
//        {
//            std::unique_lock<std::mutex> lock(queueMutex);  // 获取任务队列锁
//
//            // 等待任务或停止标志，直到有任务或者线程池需要停止
//            condition.wait(lock, [this] { return stopFlag || !tasks.empty(); });
//
//            if (stopFlag && tasks.empty()) {
//                return;  // 如果需要停止并且没有任务，退出工作线程
//            }
//
//            // 获取队列中的任务
//            task = std::move(tasks.front());
//            tasks.pop();  // 弹出任务
//        }
//
//        task();  // 执行任务
//    }
//}
//
//// 向任务队列中添加任务
//void ThreadPool::enqueueTask(std::function<void()> task) {
//    {
//        std::lock_guard<std::mutex> lock(queueMutex);  // 获取任务队列的锁
//        tasks.push(std::move(task));  // 将任务添加到队列
//    }
//
//    condition.notify_one();  // 唤醒一个等待的线程来执行任务
//}
//
//// 停止线程池，通知所有线程退出
//void ThreadPool::stop() {
//    {
//        std::lock_guard<std::mutex> lock(queueMutex);  // 获取任务队列锁
//        stopFlag = true;  // 设置停止标志
//    }
//
//    condition.notify_all();  // 通知所有线程退出
//
//    for (std::thread &worker : workers) {
//        if (worker.joinable()) {
//            worker.join();  // 等待每个工作线程完成
//        }
//    }
//}
//
//// 线程池析构函数，停止线程池
//ThreadPool::~ThreadPool() {
//    stop();  // 在析构时停止线程池，确保线程退出
//}
//
//// 主函数，创建线程池并分配任务
//int main() {
//    ThreadPool pool(8);  // 创建一个线程池，最多使用 16 个工作线程
//    std::vector<int> results;  // 存储计算结果的向量
//    std::mutex resultsMutex;  // 保护结果向量的互斥锁
//
//    // 创建并分配任务
//    for (int i = 1; i <= 1000; ++i) {
//        pool.enqueueTask([i, &results, &resultsMutex] {
//            task(i, results, resultsMutex);  // 将任务添加到线程池
//        });
//    }
//
//    pool.stop();  // 停止线程池，等待所有任务完成
//
//    // 打印最终结果
//    std::cout << "Final results: ";
//    for (int num : results) {
//        std::cout << num << " ";  // 输出每个计算结果
//    }
//    std::cout << std::endl;
//
//    return 0;  // 程序结束
//}