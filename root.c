# include<stdio.h>
# include<math.h>
int main ()
{
float a, b, c, d, x, x1, x2, realpart, imagipart;
printf("Enter the three roots of quadratic equation\n");
scanf("%f %f %f", &a, &b, &c);
if (a ==0)
{
x= -b/c;
printf ("only root x=%7.3f", x);
}
d=b*b-4*a*c;
if (d>0)
{
printf ("real and distinct roots are ");
x1 - (-b + sqrt(d)) / (2*a);
x2 = (-b - sqrt(d)) / (2*a);
printf ("xl= 7.3f \n x2=%7.3f ", x1, x2);
}
else if (d == 0)
{
printf ("repeated roots are");
x1 = -b/ (2*a);
x2 = x1;
printf ("x1 = x2 = %7.3f ",x1,x2);
}
else
{
d = sqrt(fabs(d));
realpart = -b/ (2*a); 
imagipart = d/ (2*a);
printf ("complex roots are :\n");
printf ("x1 =%7.3f + i%7.3f", realpart, imagipart);
printf ("\n x2 =%7.3f - i%7.3f", realpart, imagipart);
}
return 0;
}