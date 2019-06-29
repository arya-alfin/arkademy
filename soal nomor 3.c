int main(void) {

 int tinggi,i,j; // i = kolom, j = baris

 printf ("Masukkan tinggi:  "); scanf ("%d",&tinggi);



 for (i=11;i>tinggi;i--) {



    for (j=0; j < i; j++)

     printf (" ");

     for (j=0; j < 2 * i -1; j++)

     {

       if (i == 0 || i == tinggi)

    printf ("*");

       else

       {

       if (j == 0 || j == 2 * i-2)

    printf ("*");

       else

    printf (" ");

       }

      }

  printf ("\n");

 }

 return 0;

}