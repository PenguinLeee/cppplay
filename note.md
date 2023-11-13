<!--
 * @Description: As vividly shown in the code, 
 * @Version: 2.0
 * @Author: pen9u1nee
 * @Date: 2023-11-08 14:13:17
 * @LastEditors: pen9u1nee
 * @LastEditTime: 2023-11-09 15:02:07
-->
1. 常量指针和指针常量 const int *p; int const *p;
2. new怎么删数组 —— new a[10]; delete []a;
3. 引用、引用作为函数的入参，引用和指针常量的区别
4. 内联函数 —— 短小精悍的函数，被嵌入到正常过程中
5. 函数重载 —— 不能仅仅依靠返回值区分重载
6. 默认参数 —— 类似python
7. 函数指针 int (*fn)(int, int);
8. 命名空间和using命名空间：namespace ns1 {}

Chap 10 面向对象和类
1. struct 和 class
2. 初始化表init table，初始化 const 成员变量的唯一方法就是使用初始化列表
3. 默认构造函数 —— 无参，且仅在不定义构造函数的时候
4. 析构函数
5. <a href=https://blog.csdn.net/qq_43519886/article/details/105170209>拷贝构造函数</a> —— 什么时候使用？
6. 类的组合
7. 友元函数和友元类：单向的、不能传递的
8. 静态成员：在类的声明中只会对静态数据成员做引用性声明，需要通过类名访问/初始化。a member with an in-class initializer must be const.static 成员变量不占用对象的内存，而是在所有对象之外开辟内存，即使不创建对象也可以访问。具体来说，static 成员变量和普通的 static 变量类似，都在内存分区中的全局数据区分配内存；静态常量属性在类声明中只是声明，并没有给它分配存储空间，因此我们需要在类外部进行定义和初始化。
9. 常对象和常函数：const加在前面和后面都是什么意思？
10. 类的公有继承、私有继承、保护继承etc
11. 派生类的构造过程，和类中成员的顺序有关（基类 -> 匹配类成员和构造表 -> 执行构造函数体），和初始化表无关，和析构过程
12. 多态：运算符重载（优先性和结合性不会改变）

