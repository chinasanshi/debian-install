
--title A simple example
--author 孔佑磊
--date 2016.07.06
--bgcolor yellow
This is the abstract of this presentation.
It may consist of zero or more lines, and may be as long as you want.
--newpage agenda
--heading Agenda

  * Introduction

  * Concept

  * Implementation

  * Comparison with other implementations

  * Conclusions
--newpage intro
--heading Introduction

This is the introduction. And below, that's source code.

--beginoutput
#include <stdio.h>

int main(void) {
  puts("Hello World!");
  return 0;
}
--endoutput

--newpage install
--heading 安装与使用

安装软件： ~# spt-get install tpp

使用tpp程序来显示slide文件：使用命令 ~$ tpp demo.tpp即可

