#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z;
    int *px,*py,*pz;
    x=5,y=10,z=15;
    px=&x,py=&y,pz=&z;
    // A
    printf("x=%d y=%d z=%d px=%p py=%p pz=%p *px=%d *py=%d *pz=%d",x,y,z,px,py,pz,*px,*py,*pz);
    // B
    printf("\nSwapping pointers\n");
    // C
    int* tz=pz;
    pz=px;
    px=py;
    py=tz;
    // D
    printf("x=%d y=%d z=%d px=%p py=%p pz=%p *px=%d *py=%d *pz=%d",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
 }
