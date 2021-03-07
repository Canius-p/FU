#include<stdio.h>
 //function for space and star
//function for single line
void sili();
//function for single space
void sisp();
//function for single star
void star();
main() {
  int i, j, n = 17;
  //firsr line
  printf("small message by nabin \n");
  for (i = 1; i <= n; i++) {
    if (i == 8)
      star();
    else if (i == n)
      sili();
    else
      sisp();
  }

  //second to 4th line
  for (j = 0; j < 3; j++) {
    for (i = 1; i <= n; i++) {
      if (i == 7 || i == 8 || i == 9)
        star();
      else if (i == n)
        sili();
      else
        sisp();

    }
  }
  //for fifth line
  for (i = 1; i <= n; i++) {
    if (i == 5 || i == 7 || i == 8 || i == 9)
      star();
    else if (i == n)
      sili();
    else
      sisp();

  }
  //for sixth line
  for (i = 1; i <= n; i++) {
    if (i == 2 || i == 4 || i == 11 || i == 5)
      star();
    else if (i == 6 || i == 7 || i == 8 || i == 9)
      star();
    else if (i == n)
      sili();
    else
      sisp();

  }

  //added later seventh line
  for (i = 0; i <= n; i++) {
    if (i == 13 || i == 14 || i == 16)
      sisp();
    else if (i == n)
      sili();
    else
      star();
  }

  for (i = 1; i <= n; i++) {
    if (i == 13)
      sisp();
    else if (i == n)
      star();
    else
      star();
  }
  //for nineth line
  sili();
  for (i = 1; i <= n; i++) {
    if (i == n)
      sili();
    else
      star();
  }
  //for tenth line
  for (i = 1; i <= 10; i++) {
    star();
    if (i == 8)
      sili();
    else
      star();
  }
  //for eleventh line
  for (i = 1; i <= 14; i++) {
    if (i == 14)
      sili();
    else
      star();
  }
  //for twelveth line 
  for (i = 1; i <= 13; i++) {
    if (i == 13)
      sili();
    else
      star();
  }
  //for thirteen to sixteenth
  for (j = 0; j < 4; j++) {
    for (i = 1; i <= 13; i++) {
      if (i == 13)
        sisp();
      else
        star();

    }
    sili();
  }
}

void sili() {
  printf("\n");

}
void sisp() {
  printf(" ");
}

void star() {
  printf("*");
}
