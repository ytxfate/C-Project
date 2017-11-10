//#include "structData.h"
using namespace std;
//***采用匹配，逐行匹配，否则写入，是则跳过，并输出跳过行***//
//删除学生信息
void deletedStudent()
{
	cout<<"\n*****删除学生信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式删除"<<"\n"<<"2.以姓名的方式删除" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要删除的学号（例：10001）：";break;
				case 2:cout<<"请输入要删除的姓名（例：王二）：";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("student.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	//new
	infileNew.open("student_new.txt",ios_base::out|ios_base::app);   //将文件流对象与文件连接起来 
    if(!infileNew)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue;
    cout<<"\n学号 姓名 性别 出生年月 专业"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str)>10000)		//数据匹配
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
			
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("student.txt");
    rename("student_new.txt","student.txt");
}

//删除课程信息
void deletedCourse()
{
	cout<<"\n*****删除课程信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以课程编号的方式删除"<<"\n"<<"2.以课程名称的方式删除" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要删除的课程编号（例：20001）：";break;
				case 2:cout<<"请输入要删除的课程名称（例：语文）：";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("course.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	//new
	infileNew.open("course_new.txt",ios_base::out|ios_base::app);   //将文件流对象与文件连接起来 
    if(!infileNew)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue;
    cout<<"\n课号 课名 学分 学时"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str)>10000)		//数据匹配
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
			
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("course.txt");
    rename("course_new.txt","course.txt");
}

//删除选课信息
void deletedChoiceCourse()
{
	cout<<"\n*****删除选课信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式删除"<<"\n"<<"2.以姓名的方式删除" <<endl;
	cout<<"3.以课程编号的方式删除"<<"\n"<<"4.以课程名称的方式删除" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要删除的学号（例：10001）：";break;
				case 2:cout<<"请输入要删除的姓名（例：王二）：";break;
				case 3:cout<<"请输入要删除的课程编号（例：20001）：";break;
				case 4:cout<<"请输入要删除的课程名称（例：语文）：";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("chioced_course.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	//new
	infileNew.open("chioced_course_new.txt",ios_base::out|ios_base::app);   //将文件流对象与文件连接起来 
    if(!infileNew)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue;
    cout<<"\n课号 课名 学分 学时"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str)>10000)		//数据匹配
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
			
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("chioced_course.txt");
    rename("chioced_course_new.txt","chioced_course.txt");
}

//删除成绩信息
void deleteGrade()
{
	cout<<"\n*****删除成绩信息*****"<<endl; 
	//判断成绩方式 
	cout<<"1.以学号+课程编号的方式删除"<<"\n"<<"2.以姓名+课程编号的方式删除" <<endl;
	cout<<"3.以学号+课程名称的方式删除"<<"\n"<<"4.以姓名+课程名称的方式删除" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要删除的学号+课程编号（例：10001回车再输20001）：\n";break;
				case 2:cout<<"请输入要删除的姓名+课程编号（例：王二回车再输20001）：\n";break;
				case 3:cout<<"请输入要删除的学号+课程名称（例：10001回车再输20001）：\n";break;
				case 4:cout<<"请输入要删除的姓名+课程名称（例：王二回车再输语文）：\n";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	}
	
	string str1,str2;
	cin>>str1>>str2;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("grade.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	//new
	infileNew.open("grade_new.txt",ios_base::out|ios_base::app);   //将文件流对象与文件连接起来 
    if(!infileNew)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue;
    cout<<"\n学号 姓名 课号 课名 成绩"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //测试代码 
    	if(lineValue.find(str1)>10000)		//数据匹配
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//匹配失败返回 
		}
		else
		{
			if(lineValue.find(str2)>10000)		//数据匹配
			{
				infileNew<<lineValue<<"\n";
    			continue;	//匹配失败返回 
			}
			else
			{
				cout<<lineValue<<endl;		//匹配成功，输出结果 	
			}
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("grade.txt");
    rename("grade_new.txt","grade.txt");
} 
