#include<iostream>

using namespace std;

class Sample
{
  private:
  int height,width;
  public:
    Sample()
    {
    }
  void set_height(int);
  void set_width(int);
  int get_height();
  int get_width();
};

void Sample :: set_height(int height)
{
  this->height=height;
}

void Sample :: set_width(int width)
{
  this->width=width;
}

int Sample :: get_height()
{
  return height;
}

int Sample :: get_width()
{
  return width;
}

int main()
{
  Sample s;
  s.set_height(10);
  s.set_width(4);
  cout<<"Height="<<s.get_height()<<endl;
  cout<<"Width="<<s.get_width()<<endl;
  return 0;
  }
  
