/*************************************************************************
> File Name: expressionEvaluation.c
> Author: HaoJie
> Mail: 954487858@qq.com
> Created Time: 2018年07月16日  星期一 16h22m3s
************************************************************************/
#ifndef _SEQUENTIALSTACK_H_
#define _SEQUENTIALSTACK_H_

#define MAXSIZE 1000      //定义最大线性栈的存储空间

//char型栈
typedef struct CS{
	char* array;
	int Top;
	int len;
}charStack;

charStack* charCreateStack();		
void charPush(charStack* PtrS, char item);	
char charPop(charStack* PtrS);				
int charIsEmpty(charStack* S);						
void charClearStack(charStack* PtrS);		
char charGetTop(charStack* s);		

//double型栈
typedef struct DS{
	double* array;
	int Top;
	int len;
}doubleStack;

doubleStack* doubleCreateStack();						
void doublePush(doubleStack* PtrS, double item);	
double doublePop(doubleStack* PtrS);				
int doubleIsEmpty(doubleStack* S);						
void doubleClearStack(doubleStack* PtrS);		
double doubleGetTop(doubleStack* s);		


#endif