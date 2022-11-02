/**
 * Make new directory on network FS
 *
 * @param URL of form: N:PROTO://[HOSTNAME]:PORT/PATH/.../
 * @return status
 */

#include <string.h>
#include "network.h"

unsigned char network_mkdir(char *url)
{
  char resp[257];
  
  resp[0]='*'; // 0x2A

  strncpy(&resp[1],url,256);

  return adamnet_write(resp,strlen(resp));
}
