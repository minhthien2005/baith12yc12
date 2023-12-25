#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int maim()
    { FILE * fp;
     char filename[67], ch;
        printf ("Filename: ");
        gets (filename);
    if ((fp = fopen (filename, "w")) == NULL ) //mo tap tin de ghi
         { printf ("create file error \n");
           exit (1);
         }
     while (( ch = getche() ) != '\r') // ghi den khi an enter
             putc ( ch, fp );
     fclose (fp);
return 0;
    }
int main()
     { FILE * fp;
     char filename[67], ch;
        printf ("Filename: ");
        gets (filename);
        
    if ((fp = fopen (filename, "w")) == NULL ) //mo tap tin de doc
         { printf ("create file error \n");
           exit (1);
         }
     while ((ch = getc(fp)) !=EOF ) // doc den kh het tap tin 
         printf ("%c",ch);
         
     fclose (fp);
     return 0;
         }
   
