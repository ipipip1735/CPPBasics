//
// Created by Administrator on 2020/4/2.
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#ifdef TTT
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

DLL_EXPORT static int XX = 999;
__declspec(dllimport) static bool SEX = false;

