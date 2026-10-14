#include<iostream>

using namespace std;
// is based class (father)
    class person{
        protected:
        string name;
        int id;
        public:
        
        person(string n,int i){
            name=n;
            id=i;
        } 
        virtual void display(){
            cout<<" name is "<< name<<" id is "<< id<<endl;
        }
    };
    
        class student :virtual public person{
            protected:
            string major;
            public:
            student(string n,int i,string m):person(n,i){
                major=m;
            }
            void display(){
                person::display();
                cout<<" major is "<< major<<endl;
            }

        };
        class employee:virtual public person{
            protected:
            double salary;
            public:
            employee(string n,double s,int i):person(n,i){
                salary=s;
            }
            void display(){
                person::display();
                cout<<"salary is "<< salary<<endl;
            }

        };
        class combiend :public student,public employee{
            public:
            combiend(string n,int i,string m,double s)
                : person(n,i), student(n,i,m), employee(s,n,i) {}

            void display() override {
                person::display();
                cout<<" major is "<< major<<endl;
                cout<<"salary is "<< salary<<endl;
            }

        };
    


int main(){
   
   student s("abdo",100,"computer sience");
   employee e("ahmed",200,800);
   combiend c("ali",300,"AI",5000);
   cout<<"student informatoin"<<endl;
   s.display();
   cout<<"employee informatoin"<<endl;
   e.display();
   cout<<"student and empolyee"<<endl;
   c.display();
//anathor way

    person* p;
    p=&s;
    p->display();

    p=&e;
    p->display();

    p=&c;
    p->display();



    
    return 0;
}