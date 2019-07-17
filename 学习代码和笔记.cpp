#if 0
#include<cstdio>
#include<cmath>
#include<cstring>
int main()
{
#if 1//条件注释
	printf("helldworld\n");
	double x = 3.14;
	printf("%lf,%lf\n", sqrt(x), sin(x));
#else
	char s[10] = "helld";
	puts(s);
	char s1[20];
	strcpy_s(s1, "world");//strcpy_s代替strcpy
	puts(s1);
	strcat_s(s1, "zbcc");
	puts(s1);
#endif
	/*注释的方式 */
	//注释的方式
	//注释：     先CTRL + K，然后CTRL + C
	//取消注释： 先CTRL + K，然后CTRL + U
}
#endif


#if 0
#include<iostream>
//using std::cout;
using namespace std;//名字空间声明
int main()
{
	cout << "helkf\n";
	cout << "123" << endl;//换行的两种方式
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
	cout << "简单运算器" << endl;
	cout << "number 符号 number\n";

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
void swap(int*x, int*y)//引用实参，&相当于小名
{
	int t =*x;
	*x = *y;
	*y = *t;
}
int main()
{
	int a = 3, b = 4;
	cout << a << '\t' << b << endl;
	swap(&a, &b);//区别和下面&的用法，&表示取地址
	cout << a << '\t' << b << endl;
	return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;
void swap(int&x, int& y)//引用实参，&相当于小名
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
//默认形参的使用,默认默认形参一律靠右
//例子1
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
//函数重载，函数名字和形式参数构成了函数签名，不能根据返回类型进行区分
//例子2
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
	cout << add((double)3, 5.5) << endl;//歧义的处理
	cout << add(3, (int)5.5) << endl;//歧义的处理
}
#endif


#if 0
//函数模板,可以自动推断
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
//字符串string
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "hello", s2("world");//两者命名方式
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
//向量类似于数组，动态增长
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

	v.pop_back();//删除最后一个元素
	display(v);

	v.resize(2);
	display(v);

	v.resize(10);
	display(v);

	return 0;

}

#endif


#if 0
//指针的命名
#include <iostream>
using namespace std;

int main()
{
	int  var = 20;   // 实际变量的声明
	int *ip= &var;        // 指针变量的声明
	
	//ip = &var;       // 在指针变量中存储 var 的地址
	cout << "Value of var variable: ";
	cout << var << endl;
	// 输出在指针变量中存储的地址
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// 访问指针中地址的值
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	int *q = ip; //q和ip都是var的值
	cout << *ip << '\t' << *q << var << endl;
	return 0;
}
#endif


#if 0
//指针——数组
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4 };
	int* p = arr;//arr=&(arr[0])
	int* k = &(arr[1]);
	//p[i]就是 *(p+i)
	cout << *(p + 1) << '\t' << p << '\t' << arr[1] << endl;
	cout << *k << '\t' << k << '\t' << arr[1] << endl;

	for (int* q = p + 4; p<q; p++)
		cout << *p << '\t';
	cout << endl;
	return 0;

}

#endif

#if 0
//动态内存
#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	*p = 3;
	cout << p << '\t' << *p << endl;
	delete p;         // 释放内存,养成好习惯
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
		p[i] = 2 * i + 1;	//p[i]就是 *(p+i)
	//输出
	for (int* q = p + n; p < q; p++)
		cout << *p << '\t';
	cout << endl; 
	//delete[] p;//删除多个的方式
	//return 0;

	char* s = (char*)p;//强制转换，int4字节，char1字节
	char ch = 'a';
	int n2 = n * sizeof(int) * sizeof (char);
	for (int i = 0; i < n2; i++)
		s[i] = ch + i;
	//再输出
	for (char*r=s+n2; s < r; s++)
		cout<<*s;
	cout << endl;
	delete[] p;//删除多个的方式
	return 0;


}
#endif

#if 0
//面向对象编程实例—学生成绩分析系统
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct student
{
	public://class默认私有，struct默认公有的
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
	//student stu;//定义
	//stu.name = "xiaoming";
	//stu.score = 99;
	//stu.print();
	vector<student> stus;//记住这种定义方法
	while (1)
	{
		student stu;
		cout << "请输入姓名和分数" << endl;
		cin >> stu.name >> stu.score;
		if (stu.score < 0) break;
		stus.push_back(stu);
	}
	for (int i = 0; i < stus.size(); i++)
		stus[i].print();
	double min=100, max=0, ave=0;//这个想法好厉害
	for (int i = 0; i < stus.size(); i++)
	{
		if (stus[i].score < min) min = stus[i].score;
		if (stus[i].score > max) max = stus[i].score;
		ave += stus[i].score;
	}
	ave /= stus.size();
	cout <<"最低分"<<min << "最高分" <<max<<"平均分"<<ave << endl;
	return 0;
}

#endif


#if 0
//运算符重载，因为类就不能使用标准库的运算符
#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	double score;
public:
	student(string n, double s) //构造函数默认生成空函数
	{
		name =n ;
		score =s;
	}
	void print()
	{
		cout << name << " " << score << endl;
	}
	//友元函数
	friend ostream& operator<<(ostream& o, student s);
	friend istream& operator>>(istream& i, student &s);

};
ostream & operator<<(ostream &o, student s)//&代表直接改变实参
{
	cout << s.name<<" "<<s.score<<endl;
	return o;
}
istream& operator>>(istream &i, student &s)//&代表直接改变实参
{
	cin >> s.name >> s.score;
	return i;
}

int main() 
{
	student stu("aa",80);//和stu.name输入进行比较
	stu.print();
	cin >> stu;
	cout << stu;//需要重载与print对比
}
#endif


#if 0
//运算符重载，下标运算符,有的运算符只能外部，有的只能内部
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

	double operator[](int i)const//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
	{
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw "下标非法";//不讲
	}
	double& operator[](int i)//&变成能修改的
	{
		if (i == 0) return x;
		else if (i == 1) return y;
		else throw "下标非法";//不讲
	}
	point operator+( const point q)//作为内部
	{
		return point(this->x + q[0], this->y + q[1]);
	}



	//友元函数
	friend ostream& operator<<(ostream& o, point p);
	friend istream& operator>>(istream& i, point & p);

};
ostream& operator<<(ostream& o, point p)//&代表直接改变实参
{
	cout << p.x << " " << p.y << endl;
	return o;
}
istream& operator>>(istream& i, point& p)//&代表直接改变实参
{
	cin >> p.x >> p.y;
	return i;
}
#if 0
point operator+(const point p,const point q)//作为外部
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
//类字符string
#include<iostream>
using namespace std;
class String {
	char* date;//c风格的字符串
	int n;
public:
	String(const String& s) //拷贝构造函数——硬拷贝
	{
		n = s.n;
		date = new char[s.n + 1];
		for (int i = 0; i <= n; i++)
			date[i] = s.date[i];
		cout<<"进来了";
		
	}
	String(const char* s=0) //重写构造函数
	{//const就是不修改
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
	{//析构函数，销毁对象的时候调用
		cout << "出去了";
		delete[] date;
	}
	int size() { return n; }
	char operator[](int i)const//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
	{
		if (i<0 || i>=n) throw "非法ilegal";
		return date[i];
	}
	char& operator[](int i)//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
	{
		if (i < 0 || i >= n) throw "非法ilegal";
		return date[i];
	}



};
ostream& operator<<(ostream& o, String s)//&代表直接改变实参
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
	String str3 = str2;//拷贝构造函数
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
//|模拟vector<int>的类Vector

class Vector
{
public:
	Vector(int cap=3);
	~Vector();
	void push_back(int e) 
	{
		#if 1
		if (n == capacity) {//空间满
			cout << "增加容量";
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
	int operator[](int i)const//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
	{
		if (i < 0 || i >= n) throw "feifa";
		return date[i];
	}
	//int& operator[](int i)//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
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
//|模拟vector<int>的类Vector,改成类模板

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
		if (n == capacity) {//空间满
			cout << "增加容量:"<<endl;
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
	T operator[](int i)const//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
	{
		if (i < 0 || i >= n) throw "feifa";
		return date[i];
	}
	//int& operator[](int i)//对[]进行重载,[]必须是友元,const是常函数，不会修改数据
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

//啊哈哈哈哈哈，终于看完14P了