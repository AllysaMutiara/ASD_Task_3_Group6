#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED
 
#include "list.h"

void insertAndSort(List &L, infotype x);

void deletebyID(List &L, int id_x);

void savePassedMember(List &L, List &L2){
 address P = first(L);
    while (P != NULL) {
        if (info(P).status == "Passed") {
            insertAndSort(L2, info(P));
        }
        P = next(P);
    }  
 }


#endif // OPERATION_H_INCLUDED
