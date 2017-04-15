//STANDARD VEC DATA STRUCTURE

#include <stdio.h>
#include <string.h>
#include "intVec.h"



int main() {

    //push the second element onto the node's data array

    //repeat for all nodes in the input file

    //don't worry about the weights
    FILE* inFile=NULL;
    FILE* outFile=NULL;
    int numNodes=0;
    int data[2];
    char *first;
    char *second;
    char *useless;
    //line is a buffer input for the the reading of the lines in the file
    char line[25];
    //instantiate two file pointers
    inFile = fopen("input.txt","r");
    outFile = fopen("output.txt","w");
    if(inFile == NULL || outFile == NULL){
        exit(1);
    }

    char buf[300];

    //don't use fscanf for reading lines in a file it is bad bad
    numNodes = strtol(fgets(line,25,inFile),useless,10);
    //first make a VecNode for each Node in the list
    IntVecNode* vecNodes[numNodes];

    /*
    //strtol(--CHAR POINTER TO A STRING--,--pointer to remaing string after tokenization,--BASE OF NUMBER SYSTEM--);
    //printf("word read in is: %s\n",line);
    //fprintf(outFile, "%s",buf);
    */
    printf("The number of Nodes is: %d\n",numNodes);
    while(fgets(line,25,inFile)!=NULL){
        first =  strtok(line," ");
        second = strtok(NULL," ");
        //this holds the node number
        data[0] = strtol(first,useless,10);
        //this holds the edge
        data[1] = strtol(second,useless,10);
        //read the file lines first element and go to the node with it's number
        //push(vecNode[-node identity-],data[1]);
        push(vecNodes[data[0]], data[1]);
        //now dat[0] holds the node and data[1] hold thes destination node as int's
        printf("First is: %d Second is: %d\n",data[0],data[1]);
        printf("First + second is %d\n",data[0]+data[1]);
    }
    //need a function to print out the whole list nice and pretty

    printf("Now printing out the whole veclist:");

    printVecList(vecNodes);

    fclose(inFile);
    fclose(outFile);
    /*
    //going to have an array of vecNodes
    printf("VecNode Capacity is: %d\n",vecNode->capacity);
    printf("VecNode size is: %d \n", vecNode->sz);
    */
    kill("test");
    return 0;
}

void printVecList(IntVecNode *pNode[]) {

}
