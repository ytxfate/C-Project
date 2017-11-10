using namespace std;
//查询学生信息
void searchStudent()
{
	cout<<"\n*****查询学生信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式查询"<<"\n"<<"2.以姓名的方式查询" <<endl;
	int chi;
	while(true)
	{
		cout<<"请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			if(chi==1)
			{
				cout<<"请输入要查询的学号（例：10001）：";
				break;
			}
			else
			{
				cout<<"请输入要查询的姓名（例：王二）：";
				break;
			} 
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	} 
	
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("student.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
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
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
		}
    }
    infile.close();             //关闭文件输入流 
}


//查询课程信息
void searchCourse()
{
	cout<<"\n*****查询课程信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以课程编号的方式查询"<<"\n"<<"2.以课程名称的方式查询" <<endl;
	int chi;
	while(true)
	{
		cout<<"请输入选择（1~2）："; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			if(chi==1)
			{
				cout<<"请输入要查询的课程编号（例：20001）：";
				break;
			}
			else
			{
				cout<<"请输入要查询的课程名称（例：语文）：";
				break;
			} 
		}
		else
		{
			cout<<"输入选择错误！！！";
		}
	} 
	
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("course.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
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
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
		}
    }
    infile.close();             //关闭文件输入流 
     
}


//查询选课信息
void searchChoiceCourse()
{
	cout<<"\n*****查询选课信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式查询"<<"\n"<<"2.以姓名的方式查询" <<endl;
	cout<<"3.以课程编号的方式查询"<<"\n"<<"4.以课程名称的方式查询" <<endl;
	int chi;
	while(true)
	{
		cout<<"请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要查询的学号（例：10001）：";break;
				case 2:cout<<"请输入要查询的姓名（例：王二）：";break;
				case 3:cout<<"请输入要查询的课程编号（例：20001）：";break;
				case 4:cout<<"请输入要查询的课程名称（例：语文）：";break;
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
    infile.open("chioced_course.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
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
    		continue;	//匹配失败返回 
		}
		else
		{
			cout<<lineValue<<endl;		//匹配成功，输出结果 
		}
    }
    infile.close();             //关闭文件输入流 
    
    
}

//查询成绩信息
void searchGrade()
{
	cout<<"\n*****查询成绩信息*****"<<endl; 
	//判断查询方式 
	cout<<"1.以学号的方式查询"<<"\n"<<"2.以姓名的方式查询" <<endl;
	cout<<"3.以课程编号的方式查询"<<"\n"<<"4.以课程名称的方式查询" <<endl;
	int chi;
	while(true)
	{
		cout<<"请输入选择（1~4）："; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"请输入要查询的学号（例：10001）：";break;
				case 2:cout<<"请输入要查询的姓名（例：王二）：";break;
				case 3:cout<<"请输入要查询的课程编号（例：20001）：";break;
				case 4:cout<<"请输入要查询的课程名称（例：语文）：";break;
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
    infile.open("grade.txt",ios_base::in);   //将文件流对象与文件连接起来 
    if(!infile)//判断 是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
    string lineValue;
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
		}
    }
    infile.close();             //关闭文件输入流 
}
