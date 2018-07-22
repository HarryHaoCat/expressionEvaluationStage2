/*************************************************************************
> File Name: expressionEvaluation.c
> Author: HaoJie
> Mail: 954487858@qq.com
> Created Time: 2018年07月16日  星期一 16h22m3s
************************************************************************/
#ifndef _EXPRESSIONEVALUATION_H_
#define _EXPRESSIONEVALUATION_H_
#include<stdio.h>
int infixToPostfix(char* infoxExpression, char postfixExpression[]);      //中缀转后缀
int computeValueFromPostfix(char* postfixExpression, double *value);      //计算后缀表达式
int Priority(char c);                                                     //运算符优先级判断
int getNumOfExpression(char* postfixExpression, double numberArray[]);    //得到double型的运算数
int Isproper(char *postfixExpression, double numberArray[]);              //表达式的合法性判断
int getFirstOperator(char* infixExpression);                              //得到第一个操作符
double Pow(double i, int j);                                              //求幂函数           
#endif

