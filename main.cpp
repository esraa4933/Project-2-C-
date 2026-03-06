// برنامج لجمع رقمين مع السماح للمستخدم بادخالهم 
#include <iostream>
using namespace std;

int main() {
int a,b;
cout<<"enter tow number";
cin>>a>>b;
cout<<"a+b ="<<a+b<<endl;
    return 0;
}

//معرفه اذا كان الرقم سالب او موجب
#include <iostream>
using namespace std;

int main() {
int x;
cout<<"enter the number"<<endl;
cin>>x;
if(x>0){
    cout<<"positive number"<<endl;
}else{
    cout<<"negarive number"<<endl;
}
    return 0;
}


//معرفه تقدير الطالب
#include <iostream>
using namespace std;

int main() {
double mark;
cout<<"enter the mark "<<endl;
cin>>mark;
if(mark<=50){
    cout<<"f"<<endl;
}
else if(mark>=50&&mark<=65){
    cout<<"D"<<endl;
}
else if(mark>=65&&mark<=80){
    cout<<"c"<<endl;
}
else{
    cout<<"A"<<endl;
}
    return 0;
}



//معرفه وجود الرقم بين 1 و100
#include <iostream>
using namespace std;

int main() {
int num;
cout<<"enter num"<<endl;
cin>>num;
if(num>=1&&num <=100){
    cout<<"ok";
}else{
    cout<<"not ok"<<endl;
}


    return 0;
}



//  استخدام switch
#include <iostream>
using namespace std;
int main(){

int num;
cout<<"enter num"<<endl;
cin>>num;
switch(num){
case 1:cout<<"num is 1"<<endl;break;
case 2:cout<<"num is 2"<<endl;break;
case 3:cout<<"num is 3"<<endl;break;
case 4:cout<<"num is 4"<<endl;break;
default:cout<<"not found"<<endl;break;

}
    return 0;
}