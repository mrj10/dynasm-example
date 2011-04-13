#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


#include "bc.h"
#include "vm.h"

int engine(bc_inst_t *ip) {
  void* optable[] = {
#define BcOpTable(op, name, p1, p2) &&l_BC_##name,
      BytecodeDef(BcOpTable)
#undef  BcOpTable
    };

  /* Dispatch first instruction */
  goto *optable[BCIOp(ip[0])];

 l_BC_LT:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_LTI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_GT:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_GTI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_LTE:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_LTEI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_GTE:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_GTEI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_NEG:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_ADD:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_ADDI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_SUB:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_SUBI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_MUL:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_MULI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_DIV:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_DIVI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_FUNC:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_CALL:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_RET:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_LBL:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_BR:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_BRT:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_BRF:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_SETI:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_SETR:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  goto *optable[BCIOp((++ip)[0])];

 l_BC_EXIT:
  printf("got %"PRIu64"\n", BCIOp(ip[0]));
  printf("finished\n");

  return 0;
}
