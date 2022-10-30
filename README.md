# dataflow

## 目标

编写一个基于 dag 的任务调度框架, 主要有两大部分组成，一部分是任务依赖关系表示的图，一部分是图的运行环境, 第一版先基于 boost::graph 进行图的表示。

### 开发遵循的原则

1. 版本管理
2. 无情的测试
3. 完全自动化

### 设计遵循的原则

1. KISS
2. SOLID

## TODO

### graph

    - [ ] graph
    - [ ] subgraph
    - [ ] node
    - [ ] messae

### runtime

    - [ ] scheduler
    - [ ] executor

### basic tools

    - [ ] queue
    - [ ] threadpool
    - [ ] memorypool

### 3rd-party

    - [ ] doctest
    - [ ] nlohmann/json
    - [ ] spdlog

## References

1. [taskflow](https://github.com/taskflow/taskflow)
1. [workflow](https://github.com/sogou/workflow)
1. [CGraph](https://github.com/ChunelFeng/CGraph)
1. [gparallel](https://github.com/galois-advertising/gparallel)
