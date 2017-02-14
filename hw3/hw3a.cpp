#include <iostream>
using namespace std;

class Vec3d{
private:
	double x,y,z;
public:
	Vec3d(double x = 0, double y = 0, double z =0): x(x), y(y), z(z){}
	friend ostream& operator<<(ostream& s, Vec3d a){
		return s << '(' << a.x << ',' << a.y << ',' << a.z << ')';
	}
	Vec3d add(const Vec3d& b) const{
		return Vec3d(x+b.x, y+b.y, z+b.z);
	}
	friend Vec3d operator+ (const Vec3d& a, const Vec3d& b){
		return a.add(b);
	}
	double dot(const Vec3d& b) const{
		return x*b.x + y*b.y + z*b.z;
	}
	friend Vec3d operator* (const Vec3d& a, double n){
		return Vec3d(a.x*n,a.y*n,a.z*n);
	}
	friend Vec3d operator* (double n, const Vec3d& a){
		return Vec3d(a.x*n,a.y*n,a.z*n);
	}
};


int main() {
	const Vec3d a(1.0, 2, 2.5); //(1.0, 2.0, 2.5) (x,y,z)
	cout << a << '\n';
	Vec3d b(5.0);         //(5.0, 0.0, 0.0)
	Vec3d c = a + b;
	cout << c << '\n';
	Vec3d c2 = a.add(b);   // call a method
	cout << c2 << '\n';
	double d = a.dot(b); //  dot product = a.x*b.x + a.y*b.y + a.z*b.z
	cout << d << '\n';

	Vec3d e = a * 2;   //scalar multiplication
	cout << e << '\n';
	Vec3d f = 2 * a;   //scalar multiplication
	cout << f << '\n';
}
