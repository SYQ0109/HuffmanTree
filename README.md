# HuffmanTree
算法设计4：哈夫曼编码

### 问题描述

给定n个字母（或字）在文档中出现的频率序列X=<x1,x2,…,xn>，求出这n个字母的Huffman编码。

为保证Huffman编码的唯一性，在构造Huffman树的过程中，我们约定：

1．左儿子标记为0，右儿子标记为1；

2．左儿子的权值>=右儿子的权值；

3．相同权值w的两个字母x、y，先输入权值的字母x的Huffman编码长度不超过后输入权值的字母y的Huffman编码长度。

4．合并两个节点后新的权值应从右到左搜索、插入到相应的位置。

### 解题思路

权值小的在权值大的左边；左为0右为1。

*注：详情见数据结构：树的章节。*
