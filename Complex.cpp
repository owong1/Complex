#include <iostream>
#include "Complex.h"

//constructor with arguments
template <class T>
Complex<T>::Complex(T a, T ib){
	real = a;
	imag = ib;
}

//copy constructor
template <class T>
Complex<T>::Complex(const Complex<T>& c){
	*this = c;
	//real = c.real;
	//imag = c.imag;
}

//assignment operator (=)
template <class T>
Complex<T>& Complex<T>::operator = (const Complex<T>& c){
	this->real = c.real;
	this->imag = c.imag;
	return *this;
}

// + operator
template <class T>
Complex<T>& Complex<T>::operator + (const Complex<T>& c){
	Complex<T> *result = new Complex<T>;
	result->real = this->real + c.real;
	result->imag = this->imag + c.imag;
	return *result;
}

// - operator
template <class T>
Complex<T>& Complex<T>::operator - (const Complex<T>& c){
	//(a + bi) - (c + di) = ((a - c) + (bi - di))
	Complex<T>* result = new Complex<T>;
	result->real = this->real - c.real;
	result->imag = this->imag - c.imag;
	return* result;
}

// * operator
template <class T>
Complex<T>& Complex<T>::operator * (const Complex<T>& c){
	//(a + bi) * (c + di) = (a*c + a*di + c*bi - d*b*)
	Complex *result = new Complex;
	result->real = (this->real * c.real) - (this->imag * c.imag);
	result->imag = (this->real * c.imag) + (this->imag * c.real);
	return *result;
}
// / operator
template <class T>
Complex<T>& Complex<T>::operator / (const Complex<T>& c){
	//(a + bi)/(c + di) = ((a + bi)(c - di)/(c + di)(c - di))
	//= (a*c - a*di + b*ci + b*d)/(c*c + d*d)
	T denominator = (c.real * c.real) + (c.imag * c.imag);
	Complex *result = new Complex;
	result->real = ((this->real * c.real) + (this->imag * c.imag)) / denominator;
	result->imag = ((this->imag * c.real) - (this->real * c.imag)) / denominator;
	return *result;
}

// == operator
template <class T>
bool Complex<T>::operator == (const Complex<T>& c){
	if (this->real == c.real && this->imag == c.imag){
		//		if (){
		return true;
		//		}
	}
	return false;
}

//explicit instantiations with templates
template class Complex<int>;
//template class Complex<int*>;
//template class Complex<float>;
//template class Complex<float*>;
template class Complex<double>;
//template class Complex<double*>;
//template class Complex<char>;
//template class Complex<char*>;
//template class Complex<std::string>;