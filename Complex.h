#ifndef COMPLEX_H
#define COMPLEX_H


template <class T>
class Complex{
private:
	T real; // num, real part
	T imag; // num * i, imaginary part
public:
	//default constructor
	Complex(){ real = imag = 0; }
	//constructor with arguments
	Complex(T a, T ib);
	//copy constructor
	Complex(const Complex& c);

	//assignment operator (=)
	Complex& operator = (const Complex& c);
	//get/set
	T getReal(){ return real; }
	T getImag(){ return imag; }

	void setReal(int a){ real = a; }
	void setImag(int b){ imag = b; }

	Complex& operator + (const Complex& c);
	Complex& operator - (const Complex& c);
	Complex& operator * (const Complex& c);
	Complex& operator / (const Complex& c);

	// << operator (output)
	friend std::ostream& operator << (std::ostream& o, const Complex& c){
		o << "(" << c.real << " + " << c.imag << "i)";
		return o;
	}
	// == operator
	bool operator == (const Complex& c);

};

#endif