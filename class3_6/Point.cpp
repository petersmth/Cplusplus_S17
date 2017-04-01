class Point{
private:
  double x,y,z;
public:
  Point(){}
  Point(const Point& orig): x(orig.x), y(orig.y), z(orig.z) {}
  
}
