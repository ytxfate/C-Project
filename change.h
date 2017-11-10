//#include "structData.h"
using namespace std;
//***采用匹配，逐行匹配，否则写入，是则跳过，并输出跳过行***//
//修改学生信息
void changeStudent()
{
	cout<<"\n*****修改学生信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式修改"<<"\n"<<"2.以姓名的方式修改" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要修改的学号（例：10001）：";break;
				case 2:cout<<"请输入要修改的姓名（例：王二）：";break;
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
			//addStudent();
			struct STUDENT stu; 
			cout<<"\n*****修改学生信息*****"<<endl; 
			while(true)
			{
				cout<<"请输入学生学号：（例：10001）";cin>>stu.num;
				ifstream infile; 
			    infile.open("student.txt",ios_base::in);   //将文件流对象与文件连接起来 
			    if(!infile)//判断 是否打开文件 
				{
					cout<<"open error!"<<endl;
					abort();	//文件打不开时调用abort()函数直接终止程序
				}
			    string lineValue;
			    strstream ss;
		    	string str;
		    	ss << stu.num;
		    	ss >> str;
			    while(getline(infile,lineValue))
			    {
			    	if(lineValue.find(str)>10000)		//数据匹配
			    	{
			    		continue;	//匹配失败返回 
					}
					else
					{
						cout<<"学号"<<stu.num<<"已存在"<<endl;		//匹配成功，输出结果 
						break; 
					}
			    }
			    infile.close();             //关闭文件输入流 
			}
			cout<<"请输入学生姓名：（例：王二）";cin>>stu.name;
			cout<<"请输入学生性别：（例：男）";cin>>stu.sex;
			cout<<"请输入学生出生日期-年：（例：1996）";cin>>stu.birthday.year;
			cout<<"请输入学生出生日期-月：（例：3）";cin>>stu.birthday.month;
			cout<<"请输入学生出生日期-日：（例：15）";cin>>stu.birthday.day;
			cout<<"请输入学生专业：（例：计算机）";cin>>stu.profe;
			//数据写入文件夹 
			ofstream outfile("student_new.txt",ios_base::out|ios_base::app);	//打开文件 
			if(!outfile)	//判断是否打开文件 
			{
				cout<<"open error!"<<endl;
				abort();	//文件打不开时调用abort()函数直接终止程序
			}
			outfile<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.birthday.year<<" "<<stu.birthday.month<<" "<<stu.birthday.day<<" "<<stu.profe<<"\n";		//将数据写入到student.txt文件中 
			outfile.close();
			
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("student.txt");
    rename("student_new.txt","student.txt");
}

//修改课程信息
void changeCourse()
{
	cout<<"\n*****修改课程信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以课程编号的方式修改"<<"\n"<<"2.以课程名称的方式修改" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要修改的课程编号（例：20001）：";break;
				case 2:cout<<"请输入要修改的课程名称（例：语文）：";break;
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
			//addCourse();
			struct COURSE course; 
			cout<<"\n*****修改课程信息*****"<<endl; 
			while(true)
			{
				cout<<"请输入课程编号：（例：20001）";cin>>course.courseNum;
				ifstream infile; 
			    infile.open("course.txt",ios_base::in);   //将文件流对象与文件连接起来 
			    if(!infile)//判断 是否打开文件 
				{
					cout<<"open error!"<<endl;
					abort();	//文件打不开时调用abort()函数直接终止程序
				}
			    string lineValue;
			    strstream ss;
		    	string str;
		    	ss << course.courseNum;
		    	ss >> str;
			    while(getline(infile,lineValue))
			    {
			    	if(lineValue.find(str)>10000)		//数据匹配
			    	{
			    		continue;	//匹配失败返回 
					}
					else
					{
						cout<<"课程编号"<<course.courseNum<<"已存在"<<endl;		//匹配成功，输出结果 
						break; 
					}
			    }
			    infile.close();             //关闭文件输入流 
			}
			cout<<"请输入课程名称：（例：语文）";cin>>course.courseName;
			cout<<"请输入课程学分：（例：3）";cin>>course.courseCredit;
			cout<<"请输入课程学时：（例：10）";cin>>course.coursePeriod;
			//数据写入文件夹 
			ofstream outfile("course.txt",ios_base::out|ios_base::app);	//打开文件 
			if(!outfile)	//判断是否打开文件 
			{
				cout<<"open error!"<<endl;
				abort();	//文件打不开时调用abort()函数直接终止程序
			}
			outfile<<course.courseNum<<" "<<course.courseName<<" "<<course.courseCredit<<" "<<course.coursePeriod<<"\n";		//将数据写入到student.txt文件中 
			outfile.close(); 		
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("course.txt");
    rename("course_new.txt","course.txt");
}

//修改选课信息
void changeChoiceCourse()
{
	cout<<"\n*****修改选课信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式修改"<<"\n"<<"2.以姓名的方式修改" <<endl;
	cout<<"3.以课程编号的方式修改"<<"\n"<<"4.以课程名称的方式修改" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要修改的学号（例：10001）：";break;
				case 2:cout<<"请输入要修改的姓名（例：王二）：";break;
				case 3:cout<<"请输入要修改的课程编号（例：20001）：";break;
				case 4:cout<<"请输入要修改的课程名称（例：语文）：";break;
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
    cout<<"\n学号 姓名 课号 课名"<<endl; 
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
			//addChoiceCourse();
			struct CHIOCED_COURSE chioce_course; 
			cout<<"\n*****修改选课信息*****"<<endl; 
			cout<<"请输入学号：（例：10001）";cin>>chioce_course.num;
			cout<<"请输入姓名：（例：王二）";cin>>chioce_course.name;
			cout<<"请输入课程编号：（例：20001）";cin>>chioce_course.courseNum;
			cout<<"请输入课程名称：（例：语文）";cin>>chioce_course.courseName;
			//数据写入文件夹 
			ofstream outfile("chioced_course.txt",ios_base::out|ios_base::app);	//打开文件 
			if(!outfile)	//判断是否打开文件 
			{
				cout<<"open error!"<<endl;
				abort();	//文件打不开时调用abort()函数直接终止程序
			}
			outfile<<chioce_course.num<<" "<<chioce_course.name<<" "<<chioce_course.courseNum<<" "<<chioce_course.courseName<<"\n";		//将数据写入到student.txt文件中 
			outfile.close();		
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("chioced_course.txt");
    rename("chioced_course_new.txt","chioced_course.txt");
}
//修改成绩信息 
void changeGrade()
{
	cout<<"\n*****修改成绩信息*****"<<endl; 
	//判断成绩方式 
	cout<<"1.以学号+课程编号的方式修改"<<"\n"<<"2.以姓名+课程编号的方式修改" <<endl;
	cout<<"3.以学号+课程名称的方式修改"<<"\n"<<"4.以姓名+课程名称的方式修改" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要修改的学号+课程编号（例：10001回车再输20001）：\n";break;
				case 2:cout<<"请输入要修改的姓名+课程编号（例：王二回车再输20001）：\n";break;
				case 3:cout<<"请输入要修改的学号+课程名称（例：10001回车再输20001）：\n";break;
				case 4:cout<<"请输入要修改的姓名+课程名称（例：王二回车再输语文）：\n";break;
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
				struct GRADE grade; 
				//cout<<"*****修改选课信息*****"<<endl; 
				cout<<"请输入学号：（例：10001）";cin>>grade.num;
				cout<<"请输入姓名：（例：王二）";cin>>grade.name;
				cout<<"请输入课程编号：（例：20001）";cin>>grade.courseNum;
				cout<<"请输入课程名称：（例：语文）";cin>>grade.courseName;
				cout<<"请输入课程成绩：（例：88）";cin>>grade.gradeValue;
				//数据写入文件夹 
				ofstream outfile("grade_new.txt",ios_base::out|ios_base::app);	//打开文件 
				if(!outfile)	//判断是否打开文件 
				{
					cout<<"open error!"<<endl;
					abort();	//文件打不开时调用abort()函数直接终止程序
				}
				outfile<<grade.num<<" "<<grade.name<<" "<<grade.courseNum<<" "<<grade.courseName<<" "<<grade.gradeValue<<"\n";		//将数据写入到student.txt文件中 
				outfile.close();	
			}
							
		}
    }
    infile.close();             //关闭文件输入流 
    infileNew.close();
    remove("grade.txt");
    rename("grade_new.txt","grade.txt");
} 
