# dataflow

## 目标

1. 编写一个基于 dag 的任务调度框架, 主要有两大部分组成：
   - 一部分是表示任务依赖关系的图，第一版先基于 boost::graph
   - 一部分是图的运行环境
1. 使用依赖注入

### 开发遵循的原则

1. 版本管理
   - 使用 pull request，不能直接 push 到主分支
   - commit 遵循[angular Commit Message Guidelines](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines), `[type]` type 需用方框号包起来
2. 无情的测试
3. 完全自动化

### 设计遵循的原则

1. KISS
2. DRY
3. boundaries
4. SOLID
   - `The Single-responsibility principle`: 正交性， "There should never be more than one reason for a class to change." In other words, every class should have only one responsibility.
   - `The Open–closed principle`: 扩展性，"Software entities ... should be open for extension, but closed for modification."
   - `The Liskov substitution principle`: "Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it."
   - `The Interface segregation principle`: "Clients should not be forced to depend upon interfaces that they do not use."
   - `The Dependency inversion principle`: "Depend upon abstractions, [not] concretions."

## 文档

1. 使用效率画图工具
   - 概念图: [sourcegrah](https://sourcegraph.com/)
   - UML 图: [mermaid](https://mermaid.live/)

### 设计文档列表

| 名字       | 文档                      |
| :--------- | :------------------------ |
| graph      | [graph.md](docs/graph.md) |
| runtime    |                           |
| queue      |                           |
| threadpool |                           |
| memorypool |                           |
| profiling  |                           |

## 测试

1. 测试开发方法
   - 测试驱动开发（TDD）
1. 对比测试框架

   - [Catch2](https://github.com/catchorg/Catch2)a
   - gtest
   - doctest

## TODO

### graph

    - [ ] graph
    - [ ] subgraph
    - [ ] node
    - [ ] message
    - [ ] graph2svg
    - [ ] svg2graph

### runtime

    - [ ] scheduler
    - [ ] executor
    - [ ] async
    - [ ] pipeline
    - [ ] queue(buffer)

1. note:
   - node 是调度最小单位
   - node 之间有 buffer 缓冲，用于异步流水

### basic tools(手写 + 设计文档)

    - [ ] queue
    - [ ] threadpool
    - [ ] memorypool
    - [ ] timer
    - [ ] counter

### 3rd-party

    - [ ] doctest
    - [ ] nlohmann/json
    - [ ] spdlog

### others

    - [ ]测试框架选择

## References

1. [taskflow](https://github.com/taskflow/taskflow)
1. [workflow](https://github.com/sogou/workflow)
1. [CGraph](https://github.com/ChunelFeng/CGraph)
1. [gparallel](https://github.com/galois-advertising/gparallel)
