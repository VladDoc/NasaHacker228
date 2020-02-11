#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>

int main()
{
  printf("Started Hacking\n");
    for(int i = 0; i < 6; ++i) {
      printf("NASA Hacking %d%\n", i * 20);
      sleep(i * 1000); // later ones take longer
  }
  printf("NASA Hacked Successfully\n");
}