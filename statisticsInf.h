//#include "structData.h"
//#include <typeinfo>  
using namespace std;
//统计学生平均成绩
void statisticsStudent()
{
	cout<<"\n*****统计学生平均成绩*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式统计学生平均成绩"<<"\n"<<"2.以姓名的方式统计学生平均成绩" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要查询的学号（例：10001）：";break;
				case 2:cout<<"请输入要查询的姓名（例：王二）：";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	} 
	int i=0;
	int grades[10]; 
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("grade.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue,gradeValue;
    cout<<"\n学号 姓名 课号 课名 成绩"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str)>10000)		//数据匹配
    	{
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
			int index=lineValue.find_last_of(" ");
			gradeValue=lineValue.substr(index+1);
			int gra=atoi(gradeValue.c_str());
			//cout<<gra<<"\n"<<typeid(gra).name()<<endl;		//测试 
			grades[i]=gra;
			i++; 
		}
    }
    double allGrade,averGrade; 
    for(int j=0;j<i;j++)	//输出 
    {
    	//cout<<grades[j]<<endl;
    	allGrade+=grades[j];
	}
    averGrade=allGrade/i;
    cout<<"\n该生总分： "<<allGrade<<"\n"<<"该生平均分： "<<averGrade<<"\n"<<endl; 
    infile.close();             //关闭文件输入流 
}

//统计一门课程的平均成绩
void statisticsCourse()
{
	cout<<"*****统计一门课程的平均成绩*****"<<endl; 
	//判断查询方式 
	cout<<"1.以课程编号的方式统计一门课程的平均成绩"<<"\n"<<"2.以课程名称的方式统计一门课程的平均成绩" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要查询的课程编号（例：20001）：";break;
				case 2:cout<<"请输入要查询的课程名称（例：语文）：";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	} 
	int i=0;
	int grades[100]; 
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("grade.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue,gradeValue;
    cout<<"\n学号 姓名 课号 课名 成绩"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str)>10000)		//数据匹配
    	{
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
			int index=lineValue.find_last_of(" ");
			gradeValue=lineValue.substr(index+1);
			int gra=atoi(gradeValue.c_str());
			//cout<<gra<<"\n"<<typeid(gra).name()<<endl;		//测试 
			grades[i]=gra;
			i++; 
		}
    }
    double allGrade,averGrade; 
    for(int j=0;j<i;j++)	//输出 
    {
    	//cout<<grades[j]<<endl;
    	allGrade+=grades[j];
	}
    averGrade=allGrade/i;
    cout<<"\n该科总分： "<<allGrade<<"\n"<<"该科平均分： "<<averGrade<<"\n"<<endl; 
    infile.close();             //关闭文件输入流 
}

