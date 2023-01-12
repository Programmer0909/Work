#include <bits/stdc++.h>
using namespace std;

struct test
{
    int i;
    const char* c;
};


    struct test s[]={   {5,"became"},
                        {4,"better"},
                        {6,"jungle"},
                        {8,"aNcestor"},
                        {7,"brother"}
                        };

//AIM : 
int main(){
    // int ni=5;
    // char nc = 'a';
    // float nf = 5.0;
    // double nd = 5.0;

    // int *i = &ni;
    // char *c = &nc;
    // float *f = &nf;
    // double *d = &nd;

    // cout << sizeof(ni) << " " << sizeof(i) << endl;
    // cout << sizeof(nc) << " " << sizeof(c) << endl;
    // cout << sizeof(nf) << " " << sizeof(f) << endl;
    // cout << sizeof(nd) << " " << sizeof(d) << endl;



    // DECLARATION
    // float f = 6.0;
    // double d = 9.0;
    // int i=5;
    // char c='a';

    // // INITIALIZATION 
    // float *ftr = &f;
    // double *dtr = &d;
    // int *ptr=&i;
    // char *ch=&c;

    // cout << "FOR INT" << endl;
    // cout << "ADDRESS OF POINTER : " << (int)ptr << endl;
    // cout << "VALUE OF POINTER : " <<*ptr << endl;
    // ptr++;
    // cout <<"ADDRESS OF POINTER : " << (int)ptr << endl;
    // cout << "VALUE OF POINTER : " <<*ptr << endl;
    
    // cout << "FOR CHAR" << endl;
    // cout <<"ADDRESS OF POINTER : " << (int)ch << endl;
    // cout << "VALUE OF POINTER : " <<*ch << endl;
    // ch++;
    // cout <<"ADDRESS OF POINTER : " << (int)ch << endl;
    // cout << "VALUE OF POINTER : " <<*ch << endl;

    // cout << "FOR FLOAT" << endl;
    // cout << "ADDRESS OF POINTER : " << (int)ftr << endl;
    // cout << "VALUE OF POINTER : " <<*ftr << endl;
    // ftr++;
    // cout <<"ADDRESS OF POINTER : " << (int)ftr << endl;
    // cout << "VALUE OF POINTER : " <<*ftr << endl;

    // cout << "FOR DOUBLE" << endl;
    // cout << "ADDRESS OF POINTER : " << (int)dtr << endl;
    // cout << "VALUE OF POINTER : " <<*dtr << endl;
    // dtr++;
    // cout <<"ADDRESS OF POINTER : " << (int)dtr << endl;
    // cout << "VALUE OF POINTER : " <<*dtr << endl;





    // PONTER OF POINTERS

    int j=5;
    int *p=&j;
    int **q=&p;
    int ***r=&q;

    // cout << (int)&j << endl<<(int)p << endl << (int)q << endl << (int)r << endl;
    // cout << *p << endl << (int)**q << endl << (int)*r << endl;
    cout << (int)p << endl;

    // cout << (*p)++<<endl;
    // cout << *p << " " << j<<endl;;
    // cout << (int)p << endl;
    cout << *p++ << endl;
    cout << (int)p << " " << j<<endl;;

    cout << (int)p << endl;

    // cout << ++*p << endl;
    // cout << *p << " " << j<<endl;;
    // cout << (int)p << endl;




    // 2-D ARRAY 

    // int a[2][3]={   {   1   ,   2   ,   3  },
    //                 {   4   ,   5   ,   6  }};
    // int (*p)[3]=a;

    
    // printf("%d\n"   ,  a   );
    // printf("%d\n"   ,  a[0]    );
    // printf("%d\n"   ,  &a[0]   );
    // printf("%d\n"   ,  a[0][0]     )    ;
    // printf("%d\n"   ,  &a[0][0]    );
    // printf("%d\n"   ,  &a[1][2]    );
    // printf("%d\n"   ,  *(a[1])     );
    
    // cout << endl;
    // cout << endl;

    // // printf("%d\n"   ,  ++p   );
    //     // printf("%d\n"   ,  (p+1)[2]   );
    // printf("%d\n"   ,  p[0]    );
    // printf("%d\n"   ,  &p[0]   );
    // printf("%d\n"   ,  p[0][0]     )    ;
    // printf("%d\n"   ,  &p[0][0]    );
    // printf("%d\n"   ,  &p[1][2]    );
    // printf("%d\n"   ,  *(p[1])     );
    






    // // STRUCTURE 

    // struct test *p=s;
    // p+=1;
    // // ++p->c;
    // p++;
    // ++p->c;
    // printf("%s\n",++p->c);
    // // *p++->c;
    // printf("%c\n",*p++->c);
    // printf("%d\n",p[0]);
    // printf("%s\n",p->c);
    

    return 0;
}