#if 0
#include<cstdio>
#include<cmath>
#include<cstring>
int main()
{
#if 1//����ע��
	printf("helldworld\n");
	double x = 3.14;
	printf("%lf,%lf\n", sqrt(x), sin(x));
#else
	char s[10] = "helld";
	puts(s);
	char s1[20];
	strcpy_s(s1, "world");//strcpy_s����strcpy
	puts(s1);
	strcat_s(s1, "zbcc");
	puts(s1);
#endif
	/*ע�͵ķ�ʽ */
	//ע�͵ķ�ʽ
	//ע�ͣ�     ��CTRL + K��Ȼ��CTRL + C
	//ȡ��ע�ͣ� ��CTRL + K��Ȼ��CTRL + U
}
#endif


#if 0
#include<iostream>
//using std::cout;
using namespace std;//���ֿռ�����
int main()
{
	cout << "helkf\n";
	cout << "123" << endl;//���е����ַ�ʽ
	cout << "helkf" << endl;//console output
	double radius;
	cin >> radius;
	cout << 3.14 * radius * radius;
	return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;
void help()
{
	cout << "��������" << endl;
	cout << "number ���� number\n";

}
int main()
{
	while (1)
	{
		help();
		double a, c;
		char b;
		cin >> a >> b >> c;
		//if (b == '+')
		//	cout << a + c << endl;
		switch (b)
		{
		case'+':cout << a + c << endl; break;
		case'-':cout << a - c << endl; break;
		case'*':cout << a * c << endl; break;
		case'/':cout << a / c << endl; break;
		default:cout << "error" << endl; break;
		}
	}

}
#endif



#if 0
#include<iostream>
using namespace std;
void swap(int*x, int*y)//����ʵ�Σ�&�൱��С��
{
	int t =*x;
	*x = *y;
	*y = *t;
}
int main()
{
	int a = 3, b = 4;
	cout << a << '\t' << b << endl;
	swap(&a, &b);//���������&���÷���&��ʾȡ��ַ
	cout << a << '\t' << b << endl;
	return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;
void swap(int&x, int& y)//����ʵ�Σ�&�൱��С��
{
	int t = x;
	x = y;
	y = t;
}
int main()
{
	int a = 3, b = 4;
	cout << a << '\t' << b<<endl;
	swap(a, b);
	cout << a << '\t' << b<< endl;
	return 0;
}
#endif

#if 0
//Ĭ���βε�ʹ��,Ĭ��Ĭ���β�һ�ɿ���
//����1
#include<iostream>
using namespace std;
void star(char x,int n=1)
{
	for (int i = 0; i < n; i++)
	{
		cout << x;
	}
}
int main() 
{
	star('a'); cout << endl;	
	star('a',3); cout << endl;
	star('a',5); cout << endl;
	return 0;
}
#endif

#if 0
//�������أ��������ֺ���ʽ���������˺���ǩ�������ܸ��ݷ������ͽ�������
//����2
#include<iostream>
using namespace std;
int add(int x, int y = 1)
{
	return x + y;
}
double add(double x, double y = 1)
{
	return x + y;
}
int main()
{
	cout << add(3, 5) << endl;
	cout << add(3.3, 5.5) << endl;
	cout << add((double)3, 5.5) << endl;//����Ĵ���
	cout << add(3, (int)5.5) << endl;//����Ĵ���
}
#endif


#if 0
//����ģ��,�����Զ��ƶ�
#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
T add(T x, T y) 
{
	return x + y;
}
int main()
{
	cout << add(3, 5) << endl;
	cout << add<double>(3.3, 5.5) << endl;
	cout << add<string>("hello ", "world") << endl;

}

#endif


#if 0
//�ַ���string
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "hello", s2("world");//����������ʽ
	cout << s.size() << endl;
	string s3 = s.substr(1, 3);
	cout << s3 << endl;
	string s4 = s + " " + s2;
	cout << s4 << endl;
	s4[0] = 'H';
	s4[6] = 'W';
	cout << s4 << endl;
	int pos = s4.find("orl");
	cout << pos << endl;
	s4.insert(3, "ABCD");
	cout << s4 << endl;
	for (int i = 0; i < s4.size(); i++)
		cout << s4 [i]<< "-";
	cout << endl;
	return 0;
}
#endif

#if 0
//�������������飬��̬����
#include<iostream>
#include<vector>
using namespace std;

int display(vector<int> k) 
{
	for (int j = 0; j < k.size(); j++)
		cout << k[j] << '\t';
	cout << endl;
	return 0;
}

int main() 
{
	vector<int> v = { 1,2,3,4 };
	v.push_back(5);
	v.push_back(6);
	display(v);

	v.pop_back();//ɾ�����һ��Ԫ��
	display(v);

	v.resize(2);
	display(v);

	v.resize(10);
	display(v);

	return 0;

}

#endif


#if 0
//ָ�������
#include <iostream>
using namespace std;

int main()
{
	int  var = 20;   // ʵ�ʱ���������
	int *ip= &var;        // ָ�����������
	
	//ip = &var;       // ��ָ������д洢 var �ĵ�ַ
	cout << "Value of var variable: ";
	cout << var << endl;
	// �����ָ������д洢�ĵ�ַ
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// ����ָ���е�ַ��ֵ
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	int *q = ip; //q��ip����var��ֵ
	cout << *ip << '\t' << *q << var << endl;
	return 0;
}
#endif


#if 0
//ָ�롪������
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4 };
	int* p = arr;//arr=&(arr[0])
	int* k = &(arr[1]);
	//p[i]���� *(p+i)
	cout << *(p + 1) << '\t' << p << '\t' << arr[1] << endl;
	cout << *k << '\t' << k << '\t' << arr[1] << endl;

	for (int* q = p + 4; p<q; p++)
		cout << *p << '\t';
	cout << endl;
	return 0;

}

#endif

#if 0
//��̬�ڴ�
#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	*p = 3;
	cout << p << '\t' << *p << endl;
	delete p;         // �ͷ��ڴ�,���ɺ�ϰ��
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main()
{
	int n = 4;
	int *p = new int [n];
	for (int i = 0; i < n; i++)
		p[i] = 2 * i + 1;	//p[i]���� *(p+i)
	//���
	for (int* q = p + n; p < q; p++)
		cout << *p << '\t';
	cout << endl; 
	//delete[] p;//ɾ������ķ�ʽ
	//return 0;

	char* s = (char*)p;//ǿ��ת����int4�ֽڣ�char1�ֽ�
	char ch = 'a';
	int n2 = n * sizeof(int) * sizeof (char);
	for (int i = 0; i < n2; i++)
		s[i] = ch + i;
	//�����
	for (char*r=s+n2; s < r; s++)
		cout<<*s;
	cout << endl;
	delete[] p;//ɾ������ķ�ʽ
	return 0;


}
#endif

#if 0
//���������ʵ����ѧ���ɼ�����ϵͳ
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct student
{
	public://classĬ��˽�У�structĬ�Ϲ��е�
	string name;
	double score;
	void print();
};
void student::print()
{
	cout << name << '\t' << score << endl;
};

int main()
{
	//student stu;//����
	//stu.name = "xiaoming";
	//stu.score = 99;
	//stu.print();
	vector<student> stus;//��ס���ֶ��巽��
	while (1)
	{
		student stu;
		cout << "�����������ͷ���" << endl;
		cin >> stu.name >> stu.score;
		if (stu.score < 0) break;
		stus.push_back(stu);
	}
	for (int i = 0; i < stus.size(); i++)
		stus[i].print();
	double min=100, max=0, ave=0;//����뷨������
	for (int i = 0; i < stus.size(); i++)
	{
		if (stus[i].score < min) min = stus[i].score;
		if (stus[i].score > max) max = stus[i].score;
		ave += stus[i].score;
	}
	ave /= stus.size();
	cout <<"��ͷ�"<<min << "��߷�" <<max<<"ƽ����"<<ave << endl;
	return 0;
}

#endif


#if 0
//��������أ���Ϊ��Ͳ���ʹ�ñ�׼��������
#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	double score;
public:
	student(string n, double s) //���캯��Ĭ�����ɿպ���
	{
		name =n ;
		score =s;
	}
	void print()
	{
		cout << name << " " << score << endl;
	}
	//��Ԫ����
	friend ostream& operator<<(ostream& o, student s);
	friend istream& operator>>(istream& i, student &s);

};
ostream & operator<<(ostream &o, student s)//&����ֱ�Ӹı�ʵ��
{
	cout << s.name<<" "<<s.score<<endl;
	return o;
}
istream& operator>>(istream &i, student &s)//&����ֱ�Ӹı�ʵ��
{
	cin >> s.name >> s.score;
	return i;
}

int main() 
{
	student stu("aa",80);//��stu.name������бȽ�
	stu.print();
	cin >> stu;
	cout << stu;//��Ҫ������print�Ա�
}
#endif


#if 0
//��������أ��±������,�е������ֻ���ⲿ���е�ֻ���ڲ�
#include<iostream>
using namespace std;
class point 
{
	double x, y;
public:

	point(double x_,double y_)
	{
		x = x_; y = y_;

	}

	double operator[](int i)const//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	{
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw "�±�Ƿ�";//����
	}
	double& operator[](int i)//&������޸ĵ�
	{
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw "�±�Ƿ�";//����
	}
	point operator+( const point q)//��Ϊ�ڲ�
	{
		return point(this->x + q[0], this->y + q[1]);
	}



	//��Ԫ����
	friend ostream& operator<<(ostream& o, point p);
	friend istream& operator>>(istream& i, point & p);

};
ostream& operator<<(ostream& o, point p)//&����ֱ�Ӹı�ʵ��
{
	cout << p.x << " " << p.y << endl;
	return o;
}
istream& operator>>(istream& i, point& p)//&����ֱ�Ӹı�ʵ��
{
	cin >> p.x >> p.y;
	return i;
}
#if 0
point operator+(const point p,const point q)//��Ϊ�ⲿ
{
	return point(p[0]+q[0], p[1] + q[1]);
}
#endif


int main() 
{
	point p(3.5, 4.8),q(2.0,3.0);
	cout << p;
	//cin >> p;
	//cout << p;
	cout << p[0] <<" "<< p[1] << endl;
	p[0] = 3.45; p[1] = 5.67;
	cout << p;
	point s = p + q;
	cout << s;
}


#endif


#if 0
//���ַ�string
#include<iostream>
using namespace std;
class String {
	char* date;//c�����ַ���
	int n;
public:
	String(const String& s) //�������캯������Ӳ����
	{
		n = s.n;
		date = new char[s.n + 1];
		for (int i = 0; i <= n; i++)
			date[i] = s.date[i];
		cout<<"������";
		
	}
	String(const char* s=0) //��д���캯��
	{//const���ǲ��޸�
		if(s==0) {
			date = 0; n = 0; return;
		}
		const char* p = s;
		while (*p) p++;
		n = p - s;
		date = new char[n + 1];
		for (int i = 0; i <=n; i++)
			date[i] = s[i];
		}
	~String()
	{//�������������ٶ����ʱ�����
		cout << "��ȥ��";
		delete[] date;
	}
	int size() { return n; }
	char operator[](int i)const//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	{
		if (i<0 || i>=n) throw "�Ƿ�ilegal";
		return date[i];
	}
	char& operator[](int i)//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	{
		if (i < 0 || i >= n) throw "�Ƿ�ilegal";
		return date[i];
	}



};
ostream& operator<<(ostream& o, String s)//&����ֱ�Ӹı�ʵ��
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
	return o;
}

int main() 
{
	String str1, str2("helloworld");
	str2[0] = 'H';
	cout << str2<<endl;
	String str3 = str2;//�������캯��
	cout << str3<<endl ;
	str3[3] = 'L';
	cout << str3 << endl;
	cout << str2 << endl;
}

#endif 

#if 0
#include<iostream>
#include<vector>
using namespace std;
//|ģ��vector<int>����Vector

class Vector
{
public:
	Vector(int cap=3);
	~Vector();
	void push_back(int e) 
	{
		#if 1
		if (n == capacity) {//�ռ���
			cout << "��������";
			int* p = new int[2 * capacity];
			if (p) 
			{
				for (int i = 0; i < n; i++)
				{
					p[i] = date[i];
				}
				delete[] date;
				date = p;
				capacity = 2 * capacity;
			}
			else
			{
				return;
			}
		};
		#endif
		date[n] = e;
		n++;
	};
	int operator[](int i)const//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	{
		if (i < 0 || i >= n) throw "feifa";
		return date[i];
	}
	//int& operator[](int i)//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	//{
	//	return 0;
	//}
	int size()
	{
		return n;
	};

private:
	int* date;
	int capacity;
	int n;

};

Vector::Vector(int cap)
{
	date = new int[cap];
	if (date == 0) {
		cap = 0;
		n = 0;
	};
	capacity =cap;
	n = 0;
}

Vector::~Vector()
{
}

int main() {
	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\t';
	cout << endl;
	v.push_back(4);
	v.push_back(5);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\t';


}




#endif 

#if 1
#include<iostream>
#include<vector>
using namespace std;
//|ģ��vector<int>����Vector,�ĳ���ģ��

template<typename T>
class Vector
{
public:
	Vector(int cap = 3) {
		date = new T[cap];
		if (date == 0) {
			cap = 0;
			n = 0;
		};
		capacity = cap;
		n = 0;
	};
	void push_back(T e)
	{
#if 1
		if (n == capacity) {//�ռ���
			cout << "��������:"<<endl;
			T* p = new T[2 * capacity];
			if (p)
			{
				for (int i = 0; i < n; i++)
				{
					p[i] = date[i];
				}
				delete[] date;
				date = p;
				capacity = 2 * capacity;
			}
			else
			{
				return;
			}
		};
#endif
		date[n] = e;
		n++;
	};
	T operator[](int i)const//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	{
		if (i < 0 || i >= n) throw "feifa";
		return date[i];
	}
	//int& operator[](int i)//��[]��������,[]��������Ԫ,const�ǳ������������޸�����
	//{
	//	return 0;
	//}
	int size()
	{
		return n;
	};

private:
	T* date;
	int capacity;
	int n;

};


int main() {
	Vector<string> v;
	v.push_back("aa");
	v.push_back("aa");
	v.push_back("aa");
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\t';
	cout << endl;
	v.push_back("aa");
	v.push_back("aa");
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\t';


}




#endif 

//�����������������ڿ���14P��