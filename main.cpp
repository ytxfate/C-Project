#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <String>
#include <strstream>
#include "structData.h"
#include "addInf.h"
#include "change.h" 
#include "deletedInf.h"
#include "searchInf.h"
#include "statisticsInf.h"
using namespace std;

//函数声明 
void addInfor(); 
void changeInfor();
void deletedInfor();
void searchInfor();
void statisticsInfor();


//主界面 
int main()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃               （主界面）               ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃              1.添加信息                ┃"<<endl;
	cout<<"┃              2.修改信息                ┃"<<endl;
	cout<<"┃              3.删除信息                ┃"<<endl;
	cout<<"┃              4.查询信息                ┃"<<endl;
	cout<<"┃              5.统计信息                ┃"<<endl;
	cout<<"┃              0.退出                    ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~5）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=5)
		{
			system("cls");		//清屏 
			switch(inputNum)
			{
				case 1:addInfor();break;
				case 2:changeInfor();break;
				case 3:deletedInfor();break;
				case 4:searchInfor();break;
				case 5:statisticsInfor();break;
				case 0:exit(0);break;		//退出系统 
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
	}
	return 0;
}


//添加信息界面 
void addInfor()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃            （添加信息界面）            ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃            1.添加学生信息              ┃"<<endl;
	cout<<"┃            2.添加课程信息              ┃"<<endl;
	cout<<"┃            3.添加选课信息              ┃"<<endl;
	cout<<"┃            4.添加成绩信息              ┃"<<endl;
	cout<<"┃            0.返回主界面                ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~4）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:cout<<"*****添加学生信息*****"<<endl;addStudent();break;
				case 2:cout<<"*****添加课程信息*****"<<endl;addCourse();break;
				case 3:cout<<"*****添加选课信息*****"<<endl;addChoiceCourse();break;
				case 4:cout<<"*****添加成绩信息*****"<<endl;addGrade();break;
				case 0:
					system("cls");		//清屏 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
	}
}

//修改信息界面 
void changeInfor()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃            （修改信息界面）            ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃            1.修改学生信息              ┃"<<endl;
	cout<<"┃            2.修改课程信息              ┃"<<endl;
	cout<<"┃            3.修改选课信息              ┃"<<endl;
	cout<<"┃            4.修改成绩信息              ┃"<<endl;
	cout<<"┃            0.返回主界面                ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~4）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:changeStudent();break;
				case 2:changeCourse();break;
				case 3:changeChoiceCourse();break;
				case 4:changeGrade();break;
				case 0:
					system("cls");		//清屏 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
		
		cout<<endl; 
		system("pause");	//等待
		system("cls");		//清屏 
		changeInfor();
	}
}

//删除信息界面 
void deletedInfor()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃            （删除信息界面）            ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃            1.删除学生信息              ┃"<<endl;
	cout<<"┃            2.删除课程信息              ┃"<<endl;
	cout<<"┃            3.删除选课信息              ┃"<<endl;
	cout<<"┃            4.删除成绩信息              ┃"<<endl;
	cout<<"┃            0.返回主界面                ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~4）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:deletedStudent();break;
				case 2:deletedCourse();break;
				case 3:deletedChoiceCourse();break;
				case 4:deleteGrade();break;
				case 0:
					system("cls");		//清屏 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
		
		cout<<endl; 
		system("pause");	//等待
		system("cls");		//清屏 
		deletedInfor();
	}
}

//查询信息界面 
void searchInfor()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃            （查询信息界面）            ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃            1.查询学生信息              ┃"<<endl;
	cout<<"┃            2.查询课程信息              ┃"<<endl;
	cout<<"┃            3.查询选课信息              ┃"<<endl;
	cout<<"┃            4.查询成绩信息              ┃"<<endl;
	cout<<"┃            0.返回主界面                ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~4）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=4)
		{
			switch(inputNum)
			{
				case 1:searchStudent();break;
				case 2:searchCourse();break;
				case 3:searchChoiceCourse();break;
				case 4:searchGrade();break;
				case 0:
					system("cls");		//清屏 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
		cout<<endl; 
		system("pause");	//等待
		system("cls");		//清屏 
		searchInfor();	
	}
}

//统计信息界面 
void statisticsInfor()
{
	cout<<"┏━━━━━━━━━━━━━━━━━━━━┓"<<endl;
	cout<<"┃           ***学籍管理系统***           ┃"<<endl;
	cout<<"┃            （统计信息界面）            ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃            1.统计学生平均成绩          ┃"<<endl;
	cout<<"┃            2.统计一门课程的平均成绩    ┃"<<endl;
	cout<<"┃            0.返回主界面                ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┃                                        ┃"<<endl;
	cout<<"┗━━━━━━━━━━━━━━━━━━━━┛"<<endl;
	int inputNum;
	while(true)
	{
		cout<<"\n请输入选择（0~2）："; 
		cin>>inputNum;
		if(inputNum>=0&&inputNum<=2)
		{
			switch(inputNum)
			{
				case 1:statisticsStudent();break;
				case 2:statisticsCourse();break;
				case 0:
					system("cls");		//清屏 
					main();break;
				default:break;
			}
		}
		else
		{
			cout<<"输入数据错误"<<endl;
		}
		system("pause");	//等待
		system("cls");		//清屏 
		statisticsInfor();
	}
}
