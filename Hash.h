
template<typename valType>::
class Item{
  valType value;
  Item *next;
 Item(valType val):value(val),next(NULL){}
};

template<typename valType>::
class Hash{
  Item hashTable[];
  int hashFunction(valType value);
  int size;
  
 public:
  Hash();
  void addItem(valType value);
  void deleteItem(valType value);
};
