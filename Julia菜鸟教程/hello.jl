using ArgParse
using DataFrames

# 定义 People 结构体
mutable struct People
    name::String
    df::DataFrame 
    # 构造函数
    function People(name::String, df::DataFrame=DataFrame())
        # 初始化 DataFrame
        df = DataFrame([(
            age=30,
            height=173.5
        )])
        # 返回结构体实例
        return new(name, df)
    end
end

# 定义方法
function hello(people::People)
    name = people.name
    println("hello, $name.")
    # 修改 name 属性
    people.name = "Bing"
    return people
end

function hi(people::People)
    name = people.name
    println("hi, $name.")
    # 打印 DataFrame 内容
    println(people.df)
    return people
end

# 定义 main 函数，用于解析命令行参数并进行链式调用
function main()
    s = ArgParseSettings()
    @add_arg_table! s begin
        "--name", "-n"
            arg_type = String
            required = false
            default = "Bee"
            help = "Name of the person"
    end
    args = parse_args(s)
    name = args["name"]
    # 创建 People 实例
    people = People(name)
    
    # 实现链式调用
    people |> hello |> hi
end

main()
