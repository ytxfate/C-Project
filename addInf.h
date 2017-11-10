//#include "structData.h"
using namespace std;

//添加学生信息
void addStudent()
{
	struct STUDENT stu; 
	//cout<<"*****添加学生信息*****"<<endl; 
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
	cout<<"请输入学生出生日期-年：（例：1995）";cin>>stu.birthday.year;
	cout<<"请输入学生出生日期-月：（例：3）";cin>>stu.birthday.month;
	cout<<"请输入学生出生日期-日：（例：15）";cin>>stu.birthday.day;
	cout<<"请输入学生专业：（例：计算机）";cin>>stu.profe;
	//数据写入文件夹 
	ofstream outfile("student.txt",ios_base::out|ios_base::app);	//打开文件 
	if(!outfile)	//判断是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	outfile<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.birthday.year<<"-"<<stu.birthday.month<<"-"<<stu.birthday.day<<" "<<stu.profe<<"\n";		//将数据写入到student.txt文件中 
	outfile.close(); 
}

//添加课程信息
void addCourse()
{
	struct COURSE course; 
	//cout<<"*****添加课程信息*****"<<endl; 
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

//添加选课信息
void addChoiceCourse()
{
	struct CHIOCED_COURSE chioce_course; 
	//cout<<"*****添加选课信息*****"<<endl; 
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
void addGrade()
{
	struct GRADE grade; 
	//cout<<"*****添加选课信息*****"<<endl; 
	cout<<"请输入学号：（例：10001）";cin>>grade.num;
	cout<<"请输入姓名：（例：王二）";cin>>grade.name;
	cout<<"请输入课程编号：（例：20001）";cin>>grade.courseNum;
	cout<<"请输入课程名称：（例：语文）";cin>>grade.courseName;
	cout<<"请输入课程成绩：（例：88）";cin>>grade.gradeValue;
	//数据写入文件夹 
	ofstream outfile("grade.txt",ios_base::out|ios_base::app);	//打开文件 
	if(!outfile)	//判断是否打开文件 
	{
		cout<<"open error!"<<endl;
		abort();	//文件打不开时调用abort()函数直接终止程序
	}
	outfile<<grade.num<<" "<<grade.name<<" "<<grade.courseNum<<" "<<grade.courseName<<" "<<grade.gradeValue<<"\n";		//将数据写入到student.txt文件中 
	outfile.close();
}
