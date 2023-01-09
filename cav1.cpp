#include <iostream>

using namespace std;

class Operand
{
   double a;
   
   public:
    Operand()=default;
    Operand(double x):a(x) {};
    Operand operator + (Operand x) {return Operand(a + x.a);}
    Operand operator - (Operand x) {return Operand(a - x.a);}
    Operand operator * (Operand x) {return Operand(a * x.a);}
    Operand operator / (Operand x) {return Operand((x.a!=0)?a/x.a:0);}
    Operand operator % (Operand x) {return Operand((int)a%(int)x.a);}
    Operand operator ^ (Operand x) 
        {
            if ((int)x.a == 0) return 1;
            
            double v=a;
            
            for(int i=(int)x.a-1; i>0; i--) a=a*v;
         
            return *this;
            
        }
    void operator << (Operand x) {cout<<x.a;}
};

int main()
{
    double x,y;
    char opr;
    
    while( cin>>x>>opr>>y )
        {
            
            Operand a(x),b(y),c_out;
            
            switch(opr)
                { 
                    case '+': cout<<"="; c_out<<a+b; cout<<endl; break;
                    case '-': cout<<"="; c_out<<a-b; cout<<endl; break;
                    case '*': cout<<"="; c_out<<a*b; cout<<endl; break;
                    case '/': cout<<"="; c_out<<a/b; cout<<endl; break;
                    case '%': cout<<"="; c_out<<a%b; cout<<endl; break;
                    case '^': cout<<"="; c_out<<(a^b); cout<<endl; break;
                    default: break;
                }
        };
        
    return 0;
}
