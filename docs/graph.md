## boost graph

1. [examples](https://github.com/boostorg/graph/blob/develop/example)
1. `sudo apt-get install libboost-all-dev`
1. [quick_tour.cpp](https://www.boost.org/doc/libs/1_49_0/libs/graph/example/quick_tour.cpp)
1. `boost::write_graphviz` write a BGL graph object into an output stream in graphviz dot format
1. [GraphvizOnline](https://dreampuf.github.io/GraphvizOnline) view graphviz dot format online
1. [boost doxygen](http://charette.no-ip.com:81/programming/doxygen/boost/classboost_1_1adjacency__list.html#ac547c0c09a84c0103855dfb4a9b4b39d)

## [CXXGraph](https://github.com/ZigRazor/CXXGraph)

1. 轻量级，最近在开发中
1. header only

## [meta graph](https://github.com/meta-toolkit/meta/tree/master/include/meta/graph)

## [graphviz](https://gitlab.com/graphviz/graphviz)

1. [graph 声明](https://gitlab.com/graphviz/graphviz/blob/main/lib/cgraph/cgraph.h#L258)
1. [dot 命令源码](https://gitlab.com/graphviz/graphviz/-/tree/main/cmd/dot)

## [openvx graph](https://registry.khronos.org/OpenVX/specs/1.1_SC/html/d9/d7f/group__group__graph.html)

1. [结构图](https://excalidraw.com/#json=QayDBBpVZiml7Qyd5rLhE,tRXN5xy8RdFOqd2lPAvmYQ)
1. OpenVX 框架主要由 context、graph、node 等三个基本概念组织运行，三个概念是 OpenVX 的应用基础，一个应用实现可以包含多个 context（上下文），每个 context 内可以包含多个 graph（图，或连接关系），每个 graph 内可以包含多个 node（节点）。一个 node 是一个最小的调度单元，可以是图像预处理算法，可以是边缘检测算法。一个 graph 是一个功能，是由多个步骤连接在一起的完整功能。一个 context 是一个运行环境 pipeline，包含多种不同的功能，在不同场景下被调度运行，一般很少使用到多 context 的场景。如下图所示，是对应的关系说明。
   一般一个应用就包含一个 context 和一个 graph，但有不同 node 的创建，每个 node 创建接口会有配置、输入和输出的差异。此外，在运行整个应用时，还可以配置整个应用的 pipeline 设置，比如流转的 buffer 缓冲个数。
   `凡是使用了同一个变量的两个node会被标记为连接在一起，进而描绘出一个graph的完整连接关系(可以表述输入输出关系)`。连接关系会被用于后续的 graph 执行过程中。
