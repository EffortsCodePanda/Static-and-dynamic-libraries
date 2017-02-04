#include "StaticLib.h"

#pragma comment(lib,"StaticLib.lib")     //在代码里调用静态库，有这个之后，附加依赖库可以不需要了，也就是 3、链接器 - 输入 - 附加依赖项  ---依赖的lib  可以省略
int main(int argc,char* argv[])
{
	Person person;
	return 0;
}