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
    void drawGamestart();//��ʼ����
    void drawGameInfom();//��Ϸ����

public:
    static const int KLEFT = 2; /*���ұ߿���*/
    static const int KUP = 2; /*���±߿���*/
    static const int KWIDTH = 52; /*���ں᳤*/
    static const int KHEIGH = 26; /*��������*/
    


};

