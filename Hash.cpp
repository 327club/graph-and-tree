#include "Hash.h"

template<typename valType>::
Hash(){
  hashTable = new Item[10];
  size =10;
}

template<typename valType>::
addItem(valType value){
  int index=hashFunction(value);
  if(hashTable[index]==NULL){
    hashTable[index]=Item(value);
  }
  else{
    hashTable[index].next=Item(value);
  }
}

//do not include same values
template<typename valType>::
deleteItem(valType value){
  int index=hashFunction(value);
  if(hashTable[index]==NULL) return;
  Item *ptr=&hashTable[index];

  if(ptr->val==valType){ 
    ptr=ptr->next;
    return;
  }

  while(!ptr->nextr&&ptr->next->value!=valType) ptr=ptr->next;

  if(ptr->next)
    ptr->next==ptr->next->next;
  else return;
  
  
}

