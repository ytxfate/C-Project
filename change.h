//#include "structData.h"
using namespace std;
//***����ƥ�䣬����ƥ�䣬����д�룬���������������������***//
//�޸�ѧ����Ϣ
void changeStudent()
{
	cout<<"\n*****�޸�ѧ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽ�޸�"<<"\n"<<"2.�������ķ�ʽ�޸�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ�޸ĵ�ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫ�޸ĵ�������������������";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("student.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("student_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �Ա� �������� רҵ"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			//addStudent();
			struct STUDENT stu; 
			cout<<"\n*****�޸�ѧ����Ϣ*****"<<endl; 
			while(true)
			{
				cout<<"������ѧ��ѧ�ţ�������10001��";cin>>stu.num;
				ifstream infile; 
			    infile.open("student.txt",ios_base::in);   //���ļ����������ļ��������� 
			    if(!infile)//�ж� �Ƿ���ļ� 
				{
					cout<<"open error!"<<endl;
					abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
				}
			    string lineValue;
			    strstream ss;
		    	string str;
		    	ss << stu.num;
		    	ss >> str;
			    while(getline(infile,lineValue))
			    {
			    	if(lineValue.find(str)>10000)		//����ƥ��
			    	{
			    		continue;	//ƥ��ʧ�ܷ��� 
					}
					else
					{
						cout<<"ѧ��"<<stu.num<<"�Ѵ���"<<endl;		//ƥ��ɹ��������� 
						break; 
					}
			    }
			    infile.close();             //�ر��ļ������� 
			}
			cout<<"������ѧ��������������������";cin>>stu.name;
			cout<<"������ѧ���Ա𣺣������У�";cin>>stu.sex;
			cout<<"������ѧ����������-�꣺������1996��";cin>>stu.birthday.year;
			cout<<"������ѧ����������-�£�������3��";cin>>stu.birthday.month;
			cout<<"������ѧ����������-�գ�������15��";cin>>stu.birthday.day;
			cout<<"������ѧ��רҵ���������������";cin>>stu.profe;
			//����д���ļ��� 
			ofstream outfile("student_new.txt",ios_base::out|ios_base::app);	//���ļ� 
			if(!outfile)	//�ж��Ƿ���ļ� 
			{
				cout<<"open error!"<<endl;
				abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
			}
			outfile<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.birthday.year<<" "<<stu.birthday.month<<" "<<stu.birthday.day<<" "<<stu.profe<<"\n";		//������д�뵽student.txt�ļ��� 
			outfile.close();
			
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("student.txt");
    rename("student_new.txt","student.txt");
}

//�޸Ŀγ���Ϣ
void changeCourse()
{
	cout<<"\n*****�޸Ŀγ���Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.�Կγ̱�ŵķ�ʽ�޸�"<<"\n"<<"2.�Կγ����Ƶķ�ʽ�޸�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ�޸ĵĿγ̱�ţ�����20001����";break;
				case 2:cout<<"������Ҫ�޸ĵĿγ����ƣ��������ģ���";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("course_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\n�κ� ���� ѧ�� ѧʱ"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}	
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			//addCourse();
			struct COURSE course; 
			cout<<"\n*****�޸Ŀγ���Ϣ*****"<<endl; 
			while(true)
			{
				cout<<"������γ̱�ţ�������20001��";cin>>course.courseNum;
				ifstream infile; 
			    infile.open("course.txt",ios_base::in);   //���ļ����������ļ��������� 
			    if(!infile)//�ж� �Ƿ���ļ� 
				{
					cout<<"open error!"<<endl;
					abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
				}
			    string lineValue;
			    strstream ss;
		    	string str;
		    	ss << course.courseNum;
		    	ss >> str;
			    while(getline(infile,lineValue))
			    {
			    	if(lineValue.find(str)>10000)		//����ƥ��
			    	{
			    		continue;	//ƥ��ʧ�ܷ��� 
					}
					else
					{
						cout<<"�γ̱��"<<course.courseNum<<"�Ѵ���"<<endl;		//ƥ��ɹ��������� 
						break; 
					}
			    }
			    infile.close();             //�ر��ļ������� 
			}
			cout<<"������γ����ƣ����������ģ�";cin>>course.courseName;
			cout<<"������γ�ѧ�֣�������3��";cin>>course.courseCredit;
			cout<<"������γ�ѧʱ��������10��";cin>>course.coursePeriod;
			//����д���ļ��� 
			ofstream outfile("course.txt",ios_base::out|ios_base::app);	//���ļ� 
			if(!outfile)	//�ж��Ƿ���ļ� 
			{
				cout<<"open error!"<<endl;
				abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
			}
			outfile<<course.courseNum<<" "<<course.courseName<<" "<<course.courseCredit<<" "<<course.coursePeriod<<"\n";		//������д�뵽student.txt�ļ��� 
			outfile.close(); 		
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("course.txt");
    rename("course_new.txt","course.txt");
}

//�޸�ѡ����Ϣ
void changeChoiceCourse()
{
	cout<<"\n*****�޸�ѡ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽ�޸�"<<"\n"<<"2.�������ķ�ʽ�޸�" <<endl;
	cout<<"3.�Կγ̱�ŵķ�ʽ�޸�"<<"\n"<<"4.�Կγ����Ƶķ�ʽ�޸�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ�޸ĵ�ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫ�޸ĵ�������������������";break;
				case 3:cout<<"������Ҫ�޸ĵĿγ̱�ţ�����20001����";break;
				case 4:cout<<"������Ҫ�޸ĵĿγ����ƣ��������ģ���";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str;
	cin>>str;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("chioced_course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("chioced_course_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �κ� ����"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
			//addChoiceCourse();
			struct CHIOCED_COURSE chioce_course; 
			cout<<"\n*****�޸�ѡ����Ϣ*****"<<endl; 
			cout<<"������ѧ�ţ�������10001��";cin>>chioce_course.num;
			cout<<"������������������������";cin>>chioce_course.name;
			cout<<"������γ̱�ţ�������20001��";cin>>chioce_course.courseNum;
			cout<<"������γ����ƣ����������ģ�";cin>>chioce_course.courseName;
			//����д���ļ��� 
			ofstream outfile("chioced_course.txt",ios_base::out|ios_base::app);	//���ļ� 
			if(!outfile)	//�ж��Ƿ���ļ� 
			{
				cout<<"open error!"<<endl;
				abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
			}
			outfile<<chioce_course.num<<" "<<chioce_course.name<<" "<<chioce_course.courseNum<<" "<<chioce_course.courseName<<"\n";		//������д�뵽student.txt�ļ��� 
			outfile.close();		
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("chioced_course.txt");
    rename("chioced_course_new.txt","chioced_course.txt");
}
//�޸ĳɼ���Ϣ 
void changeGrade()
{
	cout<<"\n*****�޸ĳɼ���Ϣ*****"<<endl; 
	//�жϳɼ���ʽ 
	cout<<"1.��ѧ��+�γ̱�ŵķ�ʽ�޸�"<<"\n"<<"2.������+�γ̱�ŵķ�ʽ�޸�" <<endl;
	cout<<"3.��ѧ��+�γ����Ƶķ�ʽ�޸�"<<"\n"<<"4.������+�γ����Ƶķ�ʽ�޸�" <<endl;
	int chi;
	while(true)
	{
		cout<<"\n������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ�޸ĵ�ѧ��+�γ̱�ţ�����10001�س�����20001����\n";break;
				case 2:cout<<"������Ҫ�޸ĵ�����+�γ̱�ţ����������س�����20001����\n";break;
				case 3:cout<<"������Ҫ�޸ĵ�ѧ��+�γ����ƣ�����10001�س�����20001����\n";break;
				case 4:cout<<"������Ҫ�޸ĵ�����+�γ����ƣ����������س��������ģ���\n";break;
				default:break;
			}
			break;	
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	}
	
	string str1,str2;
	cin>>str1>>str2;
	ifstream infile;
	ofstream infileNew; 
	//old
    infile.open("grade.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
	//new
	infileNew.open("grade_new.txt",ios_base::out|ios_base::app);   //���ļ����������ļ��������� 
    if(!infileNew)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �κ� ���� �ɼ�"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str1)>10000)		//����ƥ��
    	{
			infileNew<<lineValue<<"\n";
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			if(lineValue.find(str2)>10000)		//����ƥ��
			{
				infileNew<<lineValue<<"\n";
    			continue;	//ƥ��ʧ�ܷ��� 
			}
			else
			{
				cout<<lineValue<<endl;		//ƥ��ɹ��������� 
				struct GRADE grade; 
				//cout<<"*****�޸�ѡ����Ϣ*****"<<endl; 
				cout<<"������ѧ�ţ�������10001��";cin>>grade.num;
				cout<<"������������������������";cin>>grade.name;
				cout<<"������γ̱�ţ�������20001��";cin>>grade.courseNum;
				cout<<"������γ����ƣ����������ģ�";cin>>grade.courseName;
				cout<<"������γ̳ɼ���������88��";cin>>grade.gradeValue;
				//����д���ļ��� 
				ofstream outfile("grade_new.txt",ios_base::out|ios_base::app);	//���ļ� 
				if(!outfile)	//�ж��Ƿ���ļ� 
				{
					cout<<"open error!"<<endl;
					abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
				}
				outfile<<grade.num<<" "<<grade.name<<" "<<grade.courseNum<<" "<<grade.courseName<<" "<<grade.gradeValue<<"\n";		//������д�뵽student.txt�ļ��� 
				outfile.close();	
			}
							
		}
    }
    infile.close();             //�ر��ļ������� 
    infileNew.close();
    remove("grade.txt");
    rename("grade_new.txt","grade.txt");
} 
