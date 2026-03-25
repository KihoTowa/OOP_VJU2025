#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void inputPoint(int a, int b)
        {
            x=a;
            y=b;
        }
        void inputPoint()
        {
            cin>>x>>y;
        }
        void printPoint()
        {
            cout<<"("<<getX()<<","<<getY()<<")"<<endl;
        }

};

class LineSegment
{
    private:
        Point d1,d2;
    public:
        void DefaultInput()
        {
            d1.inputPoint(8,5);
            d2.inputPoint(1,0);
        }
        void TwoArguments()
        {
            cout<< "Input"<<" D1's coordinates: "<<endl;
            d1.inputPoint();
            cout<< "Input"<<" D2's coordinates: "<<endl;
            d2.inputPoint();

        }
        void FourArguments()
        {
            cout<<"Input 4 coordinates respectively: ";
            d1.inputPoint();
            d2.inputPoint();
        }
        void display()
        {
            cout<<"The two points is: "<<endl;
            cout<<"D1 = ";
            d1.printPoint();
            cout<<"D2 = ";
            d2.printPoint();
        }
        void CopyLine(LineSegment other)
        {
            d1 = other.d1;
            d2 = other.d2;
        }

};
void Process(int choice)
{
    LineSegment s;
    switch (choice)
    {
        case 1:
            s.DefaultInput();
            s.display();
            break;
        case 2:
            s.TwoArguments();
            s.display();
            break;
        case 3:
            
            s.FourArguments();
            s.display();
            break;
        case 4:
            LineSegment s2;
            s2.DefaultInput();
            s.CopyLine(s2);
            s.display();
            break;
        default:
            cout<<"Quit, goodbye";
            exit(0);
    }
}
int main()
{
    int choice;
    while(true)
    {
        cout<<" Different ways to form a Line segment: "<<endl;
        cout<<"1. Form a line segments with two fixed point: "<<endl;
        cout<<"2. Form a line segments with two input points: "<<endl;
        cout<<"3. Form Line segments with two pairs of coordinates: "<<endl;
        cout<<"4. Form a line segment with an existed line segment: "<<endl;
        cout<<"5. Press any buttons other than 1-4 to quit"<<endl;
        cin>>choice;
        Process(choice);
    }
}