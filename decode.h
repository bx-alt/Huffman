#ifndef _DECODE_H
#define _DECODE_H
#include "init.h"

void decodeFile(FILE *fp, FILE *out, HTNode *HT, int NLeaf);

void decodeFile(FILE *in, 
                FILE *out, 
                HTNode *HT, // Huffman Tree 
                int NLeaf 
                ){
    // TODO: decode the file

}
#endif