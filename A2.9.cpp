#include<iostream>
using namespace std;
int main(){
    int* p = new int;
int* p2 = p;
*p = 10;
delete p;           //loi o day
cout << *p;
delete p2;
return 0;
}
//p2 dang chi vao p, sau khi giai phong p, p2 ko chi vao dau nua
