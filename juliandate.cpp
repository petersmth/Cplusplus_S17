//Peter Smith		EE553		Julian Date HW
//Formulas from http://aa.usno.navy.mil/faq/docs/JD_Formula.php

#include <iostream>
using namespace std;



class JulianDate {
private:
	double jday;
public:
	JulianDate(int year, int month, int day, int hour = 0, int min = 0, int sec = 0){
		double time = hour + min/60.0	+ sec/3600.0;

		jday= day-32075+1461*(year+4800+(month-14)/12)/4+367*(month-2-(month-14)/12*12)/12-3*((year+4900+(month-14)/12)/100)/4 + time/24;

		//jday =	367*year - int((7*(year+int((month+9)/12.0)))/4.0) + int((275*month)/9.0) + day + 1721013.5 + time/24.0 - 0.5*(-1+2*(100*year+month-190002.5>0)) + 0.5; // - 2451544.5;
	}
	JulianDate(double jday): jday(jday) {}
	friend JulianDate operator+ (const JulianDate& a, double b){
		return JulianDate(a.jday+b);
	}
	friend JulianDate operator- (const JulianDate& a, double b){
		return a+(-b);
	}
	friend double operator- (const JulianDate& a, const JulianDate& b){
		return a.jday - b.jday;
	}
	int getYear() const{
		int I,J,K;
		int L= jday+68569;
		int N= 4*L/146097;
		L= L-(146097*N+3)/4;
		I= 4000*(L+1)/1461001;
		L= L-1461*I/4+31;
		J= 80*L/2447;
		K= L-2447*J/80;
		L= J/11;
		J= J+2-12*L;
		return 100*(N-49)+I+L;
	}
	int getMonth() const{
		int I,J,K;
		int L= jday+68569;
		int N= 4*L/146097;
		L= L-(146097*N+3)/4;
		I= 4000*(L+1)/1461001;
		L= L-1461*I/4+31;
		J= 80*L/2447;
		K= L-2447*J/80;
		L= J/11;
		return J+2-12*L;

	}
	int getDay() const{
		int I,J,K;
		int L= jday+68569;
		int N= 4*L/146097;
		L= L-(146097*N+3)/4;
		I= 4000*(L+1)/1461001;
		L= L-1461*I/4+31;
		J= 80*L/2447;
		return L-2447*J/80;
	}
	int getHour() const{
		double time = jday - int(jday);
		return int(time*24);
	}
	int getMin() const{
		double time = jday - int(jday);
		return int((time*24-int(time*24))*60);
	}
	int getSec() const{
		double time = jday - int(jday);
		return int((time*24*60-int(time*24*60))*60);
	}
	friend ostream& operator<<(ostream& s, const JulianDate& a){
		return s << a.getYear() << ' '<< a.getMonth() << ' ' << a.getDay() << ' '<< a.getHour() << ' '<< a.getMin() << ' '<< a.getSec();
	}
};

int main() {
	const JulianDate d1(2017, 2, 13, 20, 00, 00);
	const JulianDate d1b(2017, 2, 13, 22, 00, 00);

	cout << d1b - d1 << '\n'; // 2 hours = 2/24 day

	const JulianDate tomorrow = d1 + 1;
	cout << tomorrow << '\n'; // 2017 2 14 20 00 00
	cout << tomorrow - d1 << '\n';
	// hh:mm:ss  20/24  20/24.0
	const JulianDate d2(2017, 2, 19); // 00:00:00
  const JulianDate d3 = d2 + 3; // what is it 3 days later?
	double days   = d3 - d1;

	int year = d3.getYear();
	int month = d3.getMonth();
	int day = d3.getDay();
	int hour = d3.getHour();
	int min = d3.getMin();
	int sec = d3.getSec();
	cout << d1 << '\n';
	cout << d2 << '\n';
	cout << d3 << '\n';
	cout << year << " " << month << " " << day << " "<< hour << " " << min << " " << sec << '\n';
	// Not every operation makes sense!
	//	JulianDate d5 = d3 * d1;
	JulianDate torture(2017, 2, 27); // 00:00:00
	for (int i = 0; i < 3; i++) {
		cout << torture.getYear() << " " << torture.getMonth() << " " << torture.getDay() << '\n';
		torture = torture + 1;
	}
}
