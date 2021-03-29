#include <iostream>
#include <optional>
#include <vector>
using namespace std;

void OptionalTest()
{
    //这种用于变量没有初始化表示状态，因为在正常情况下，变量没有状态，只有值
    //但是在程序中一些变量是应该存在是否被初始化状态的，optional就是这样一个类模板
    //它可以存储变量是否被初始化，有了它，我们就不用使用类似"-1"的这种量表示未初始化的状态了

    cout << "testing optional" << endl;
    vector<optional<int>> v_opt;
    v_opt.resize(5);
    v_opt[0] = 0;
    v_opt[1] = std::nullopt; //表示没有初始化
    v_opt[2] = 2;
    v_opt[3] = 3;
    v_opt[4] = 4;

    for (auto &elem : v_opt)
    {
        if (elem.has_value()) //检测是否初始化
        {
            cout << elem.value() << endl;
        }
        else
        {
            cout << "该元素没有初始化" << endl;
        }
    }
}