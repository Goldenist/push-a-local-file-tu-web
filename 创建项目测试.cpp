// 创建项目测试.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//传到远程1.0
//传到本地1.0 fail
//传到远程2.0 用vs提交成功，用git提交失败(tls错误)
//传到本地2.0 success
//传到远程3.0 success
//传到本地3.0 success



#include <iostream>
#include <cstring>
#include "Vector.h"
#define MAX 51
using namespace std;
int main() {
    cout << "hello Git" << endl;

    string name = "";
    int dim, num[MAX];
    cin >> name >> dim;
    for (int i = 0; i < dim; i++) {
        cin >> num[i];
    }
    Vector vec1(name, dim, num);
    vec1.Print();
    Vector vec2(vec1);
    vec2.Print();
    vec1.isEqual(vec2);
    int vec3_num[] = { 1, 2, 3 };
    Vector vec3(name, 3, vec3_num);
    vec1.isEqual(vec3);
    vec2.setName("helloWorld!");
    vec1.isEqual(vec2);
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
