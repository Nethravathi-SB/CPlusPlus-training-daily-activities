
class Complex
{
	int m_real;
	int m_img;
	static int count;
	
public:
	Complex();
	Complex(int, int);
	int getreal() const;
	int getimg() const;
	void setreal(int);
	void setimg(int);
	void accept();
	void display() const;
	void count_objects() const;
	
};
extern int counter;