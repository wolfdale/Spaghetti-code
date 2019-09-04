# include <stdio.h>
# include <stdlib.h>
# define NO_OF_CHARS 256



char *removeDups(char *str)
{
  int bin_hash[NO_OF_CHARS] = {0};
  int ip_ind = 0, res_ind = 0;
  char temp;

 
  while(*(str + ip_ind))
  {
    temp = *(str + ip_ind);
    if(bin_hash[temp] == 0)
    {
        bin_hash[temp] = 1;
        *(str + res_ind) = *(str + ip_ind);
        res_ind++;
    }
    ip_ind++;
  }
 *(str+res_ind) = '\0';

  return str;
}

int main()
{
    char str[] = "nningaaaclateeeer";
    printf("%s", removeDups(str));
    getchar();
    return 0;
}
