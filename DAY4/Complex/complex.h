
class Complex
{
	int m_real;
	int m_img;
	static int count;
	
public:
	Complex();//default constructor
	Complex(int, int);//parameterized constructor
	Complex (const Complex&);
	Complex operator+ (const Complex&); //overloading binary operator
	Complex operator-();// unary operator
	Complex& operator++();//preincrement operator
	Complex operator++(int);//post increment opeartor
	bool operator==(const Complex&);//relational operator
	int getreal() const;
	int getimg() const;
	void setreal(int);
	void setimg(int);
	void accept();
	void display() const;
	void count_objects() const;
	
};
extern int counter;