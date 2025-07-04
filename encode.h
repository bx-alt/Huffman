#ifndef _ENCODE_H
#define _ENCODE_H
#include"counter.h"
#include"queue.h"

void sort(WeightType *count, CharType *order);
void createHT(HTNode *HT, WeightType *count, CharType *order, int NLeaf);
void getHCode(HTNode *HT, CharType HCode[256][33], int NLeaf);
void encodeFile(FILE *fp, FILE *out, CharType HCode[256][33]);

void sort(  WeightType *count, // char count
            CharType *order // order[i] = i
            ){
    int i, j;
    for (i = 0; i < NChar; i++)
        order[i] = i;
    for (i = 0; i < NChar - 1; i++)
        for (j = i + 1; j < NChar; j++)
            if(count[i] > count[j]){
                WeightType temp = count[i];
                count[i] = count[j];
                count[j] = temp;
                CharType temp2 = order[i];
                order[i] = order[j];
                order[j] = temp2;
            }
}

void createHT(  HTNode *HT, // Huffman Tree
                WeightType *count, // char count
                CharType *order, // order[i] = i
                int NLeaf // number of leaf nodes
                ){
    // initialize the HT
    int i;
    for(i = 0; i < NLeaf * 2 - 1; i++){
        // TODO: fill the ch and weight of the HTNode


        HT[i].idx = i;
        HT[i].parent = -1;
        HT[i].LChild = -1;
        HT[i].RChild = -1;
    }
    // create the HT, use two queues
    Queue Q1, Q2;
    HTNode min1, min2;
    int idx = NLeaf;
    InitQueue(&Q1);
    InitQueue(&Q2);
    // TODO: implement the createHT function

}

void getHCode(HTNode *HT, CharType HCode[256][33], int NLeaf){//左0右1
    int i, j;
    //TODO: get the Huffman code for each character

}

void encodeFile(FILE *fp, 
                FILE *out, 
                CharType HCode[256][33] // [1]存储编码长度, [2] 存储编码
                ){
    if(!fp || !out)
        return;
    CharType buffer = '\0', ch = '\0';
    int count = 0, i;
    //TODO: encode the file
    
}
#endif