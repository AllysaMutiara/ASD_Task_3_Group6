#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------


    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    P = findElm(L, id_x);
     if (P != nullptr) {

        if (L.first == L.last) {
            L.first = nullptr;
            L.last = nullptr;
        } else if (P == L.first) {
           deleteFirst(L,P);
        } else if (P == L.last) {
            deleteLast(L,P);
        } else {
            Prec = P->prev;
            deleteAfter(L,Prec,P);
        }

        deallocate(P);

    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------


    //----------------------------------------
}
