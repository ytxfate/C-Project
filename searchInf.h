using namespace std;
//��ѯѧ����Ϣ
void searchStudent()
{
	cout<<"\n*****��ѯѧ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽ��ѯ"<<"\n"<<"2.�������ķ�ʽ��ѯ" <<endl;
	int chi;
	while(true)
	{
		cout<<"������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			if(chi==1)
			{
				cout<<"������Ҫ��ѯ��ѧ�ţ�����10001����";
				break;
			}
			else
			{
				cout<<"������Ҫ��ѯ��������������������";
				break;
			} 
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	} 
	
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("student.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
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
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
		}
    }
    infile.close();             //�ر��ļ������� 
}


//��ѯ�γ���Ϣ
void searchCourse()
{
	cout<<"\n*****��ѯ�γ���Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.�Կγ̱�ŵķ�ʽ��ѯ"<<"\n"<<"2.�Կγ����Ƶķ�ʽ��ѯ" <<endl;
	int chi;
	while(true)
	{
		cout<<"������ѡ��1~2����"; 
		cin>>chi;
		if(chi>0&&chi<3)
		{
			if(chi==1)
			{
				cout<<"������Ҫ��ѯ�Ŀγ̱�ţ�����20001����";
				break;
			}
			else
			{
				cout<<"������Ҫ��ѯ�Ŀγ����ƣ��������ģ���";
				break;
			} 
		}
		else
		{
			cout<<"����ѡ����󣡣���";
		}
	} 
	
	string str;
	cin>>str;
	ifstream infile; 
    infile.open("course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
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
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
		}
    }
    infile.close();             //�ر��ļ������� 
     
}


//��ѯѡ����Ϣ
void searchChoiceCourse()
{
	cout<<"\n*****��ѯѡ����Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽ��ѯ"<<"\n"<<"2.�������ķ�ʽ��ѯ" <<endl;
	cout<<"3.�Կγ̱�ŵķ�ʽ��ѯ"<<"\n"<<"4.�Կγ����Ƶķ�ʽ��ѯ" <<endl;
	int chi;
	while(true)
	{
		cout<<"������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ��ѯ��ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫ��ѯ��������������������";break;
				case 3:cout<<"������Ҫ��ѯ�Ŀγ̱�ţ�����20001����";break;
				case 4:cout<<"������Ҫ��ѯ�Ŀγ����ƣ��������ģ���";break;
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
    infile.open("chioced_course.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
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
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
		}
    }
    infile.close();             //�ر��ļ������� 
    
    
}

//��ѯ�ɼ���Ϣ
void searchGrade()
{
	cout<<"\n*****��ѯ�ɼ���Ϣ*****"<<endl; 
	//�жϲ�ѯ��ʽ 
	cout<<"1.��ѧ�ŵķ�ʽ��ѯ"<<"\n"<<"2.�������ķ�ʽ��ѯ" <<endl;
	cout<<"3.�Կγ̱�ŵķ�ʽ��ѯ"<<"\n"<<"4.�Կγ����Ƶķ�ʽ��ѯ" <<endl;
	int chi;
	while(true)
	{
		cout<<"������ѡ��1~4����"; 
		cin>>chi;
		if(chi>0&&chi<5)
		{
			switch(chi)
			{
				case 1:cout<<"������Ҫ��ѯ��ѧ�ţ�����10001����";break;
				case 2:cout<<"������Ҫ��ѯ��������������������";break;
				case 3:cout<<"������Ҫ��ѯ�Ŀγ̱�ţ�����20001����";break;
				case 4:cout<<"������Ҫ��ѯ�Ŀγ����ƣ��������ģ���";break;
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
    infile.open("grade.txt",ios_base::in);   //���ļ����������ļ��������� 
    if(!infile)//�ж� �Ƿ���ļ� 
	{
		cout<<"open error!"<<endl;
		abort();	//�ļ��򲻿�ʱ����abort()����ֱ����ֹ����
	}
    string lineValue;
    cout<<"\nѧ�� ���� �κ� ���� �ɼ�"<<endl; 
    while(getline(infile,lineValue))
    {
    	//cout<<lineValue.find(str)<<endl;    //���Դ��� 
    	if(lineValue.find(str)>10000)		//����ƥ��
    	{
    		continue;	//ƥ��ʧ�ܷ��� 
		}
		else
		{
			cout<<lineValue<<endl;		//ƥ��ɹ��������� 
		}
    }
    infile.close();             //�ر��ļ������� 
}
