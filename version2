#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>

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
    Operand operator = (Operand x) 
        {
            a=x.a;
            return *this;
        }
    void operator << (Operand x) {cout<<x.a;}
    
    void set(double x){a=x;}
    
    double get() {return a;}
};

int contains(string source, string find)
{
    int pos, length = find.size();
    char *temp = new char[length+1];
    
    strcpy(temp,find.c_str());
    
    for(int i=0;i<length;i++)
        if ( (pos = source.find(temp[i])) != string::npos )
            return pos;
    return -1;
}

int main()
{
    string s;
    double x,y;
    char *opr=new char[1];
    int pos;
    
    Operand a,b,c;
    
    while( getline(cin,s) )
        {
            pos = contains(s,"+-*/%^");
            
            if (pos != -1)
                {
                if (pos != 0)
                    x = stod(s.substr(0,pos));
                else
                    x = c.get();
                   
                string temp = s.substr(pos,1);
                strcpy(opr, temp.c_str());
                
                y = stod(s.substr(pos+1));
                
                a.set(x);
                b.set(y);
                
                switch(*opr)
                    { 
                        case '+': cout<<"="; c<<(c=a+b); cout<<endl; break;
                        case '-': cout<<"="; c<<(c=a-b); cout<<endl; break;
                        case '*': cout<<"="; c<<(c=a*b); cout<<endl; break;
                        case '/': cout<<"="; c<<(c=a/b); cout<<endl; break;
                        case '%': cout<<"="; c<<(c=a%b); cout<<endl; break;
                        case '^': cout<<"="; c<<(c=(a^b)); cout<<endl; break;
                    }
                }
            else
                {
                    x=0; y=0; c.set(0); 
                    
                    system("cls");   //for windows
                    system("clear"); //for linux
                    
                }
        };
    
    return 0;
}
