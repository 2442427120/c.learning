#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct Peoinfo data[MAX];//存放1000个信息
	int size;//记录当前有的元素个数
};

//声明

//初始化通讯录
void InitContact(struct Contact* ps);

//增加通讯录信息
void AddContact(struct Contact* ps);

//显示通讯录内容
void showContact(const struct Contact* ps);

//删除通讯录信息
void DelContact(struct Contact* ps);

//查找通信录成员的信息
void SearchContact(const struct Contact* ps);

//修改通讯录信息
void ModifyContact(struct Contact* ps);

//排序通讯录信息
//void SortContact(struct Contact*  ps);

