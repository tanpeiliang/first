#pragma once
#include "Unit.h"
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "Unit.h"
#include "food.h"
#include <vector>
#include <iostream>
class control :
    public Unit
{
public:
    void drawGamestart();//开始界面
    void drawGameInfom();//游戏界面

public:
    static const int KLEFT = 2; /*左右边框宽度*/
    static const int KUP = 2; /*上下边框宽度*/
    static const int KWIDTH = 52; /*框内横长*/
    static const int KHEIGH = 26; /*框内竖长*/
    


};

