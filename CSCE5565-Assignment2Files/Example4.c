
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



char *nrealpath(char *pathname , char *result , char *chroot_path ) 
{ char curpath[256] ;
  char workpath[256] ;
  char namebuf[256] ;
  int where ;
  int last ;
  uid_t userid ;
  char *tmp ;
  char *tmp_0 ;
  int tmp_1 ;
  char *__retres ;
  
  {if (result == (void *)0) {__retres = (char *)((void *)0);
     goto return_label;}
  
  if (pathname == (void *)0) {*result = (char)0;
    __retres = (char *)((void *)0);
    goto return_label;}
  
  strcpy(curpath, pathname);
  if ((int const   )*(pathname + 0) != '/')
  {tmp_0 = getcwd(workpath, 256);
  if (! tmp_0) {userid = geteuid();
    delay_signaling();
    seteuid((short)0);
    tmp = getcwd(workpath, 256);
    if (! tmp) {strcpy(result, ".");
      seteuid(userid);
      enable_signaling();
      __retres = (char *)((void *)0);
      goto return_label;}
    
    seteuid(userid);
    enable_signaling();}
  }
  else {workpath[0] = (char)0;}
  
  where = 0;
  while ((int )curpath[where] != 0) {tmp_1 = strcmp(curpath + where, ".");
    if (! tmp_1) {where ++;
      continue;}
    
    /* STAC: BAD */
    strcpy(namebuf, workpath);
    last = 0;
    while ((int )namebuf[last] != 0) {goto __Cont;
      __Cont: /* CIL Label */ ;
      last ++;}
    
    if (last == 0) {r_strcat(namebuf, "/");}
    else {{last --;
           }
    if ((int )namebuf[last] != '/') {r_strcat(namebuf, "/");}
    }
    
    /* STAC: BAD */
    r_strcat(namebuf, curpath + where);}
  
  __retres = result;
  return_label: /* CIL Label */ 
  return (__retres);}

}

int main(void)
{
  char mypath[500];
  char *myresult;
  char *mychroot;

  char *result;
  
  result[0]="\0";
  
  gets(mypath);
    
  result = nrealpath(mypath, myresult, mychroot);
}