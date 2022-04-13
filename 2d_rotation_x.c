#include <stdio.h>
#include <math.h>

 struct array
{
        float arr[100];

};
 struct array rotation()
{   int theta, radian;
     theta=0;
     float pi=22/7;
     radian = theta*(pi/180);

     struct array x;

    x.arr[0]=cos(radian);
    x.arr[1]=(-sin(radian));
    x.arr[2]=sin(radian);
    x.arr[3]=cos(radian);
    return x;
}



int main()
{

    struct array x=rotation();
    printf("%f %f %f %f",x.arr[0],x.arr[1],x.arr[2],x.arr[3]);
    return 0;



}
